/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:06:11 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:25:02 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:42 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:28:14 CST. */
/**
 * server.c
 */

#include "config.h"

/*处理接收客户端消息函数*/
void *recv_message(void *fd)
{
	int sockfd = *(int*)fd;
	while(1)
	{
		char buf[MAX_LINE];
		memset(buf, 0, MAX_LINE);
		int n;
		if((n = recv(sockfd, buf, MAX_LINE, 0)) == -1)
		{
			perror("recv error");
			exit(1);
		}
		buf[n] = '\0';

		/*若收到的是exit字符，则代表退出通信*/
		if(strcmp(buf, "byebye.") == 0)
		{
			printf("Client closed\n");
			close(sockfd);
			exit(1);
		}

		printf("\nClient: %s\n",buf);
	}
}

int main(int argc, char **argv)
{
	/*声明套接字*/
	int listenfd, connfd;
	socklen_t clilen;

	/*声明线程*/
	pthread_t recv_tid, send_tid;

	/*定义地址结构*/
	struct sockaddr_in servaddr, cliaddr;

	/*1.创建套接字*/
	if((listenfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket error.\n");
		exit(1);
	}

	/*2.初始化地质结构*/
	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servaddr.sin_port = htons(PORT);

	/*3.绑定套接字和编程*/
	if(bind(listenfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0)
	{
		perror("bind error.\n");
		exit(1);
	}

	/*4.监听*/
	if(listen(listenfd, LISTENQ) < 0)
	{
		perror("listen error.\n");
		exit(1);
	}

	/*5.接收客户请求，并创建线程处理*/
	clilen = sizeof(cliaddr);
	if((connfd = accept(listenfd, (struct sockaddr *)&cliaddr, &clilen)) < 0)
	{
		perror("accept error.\n");
		exit(1);
	}

	printf("server: got connection from %s\n", inet_ntoa(cliaddr.sin_addr));

	/*创建子线程处理该客户连接接收消息*/
	if(pthread_create(&recv_tid, NULL, recv_message, &connfd) == -1)
	{
		perror("pthread create error\n");
		exit(1);
	}

	/*处理服务器发送消息*/
	char msg[MAX_LINE];
	memset(msg, 0, MAX_LINE);
	
	while(fgets(msg, MAX_LINE, stdin) != NULL)
	{
		if(strcmp(msg, "exit\n") == 0)
		{
			printf("byebye.\n");
			memset(msg, 0, MAX_LINE);
			strcpy(msg, "byebye.");
			send(connfd, msg, strlen(msg), 0);
			close(connfd);
			exit(0);
		}

		if(send(connfd, msg, strlen(msg), 0) == -1)
		{
			perror("send error.\n");
			exit(1);
		}
		
		{
			printf("recv client msg: %s\n", msg);
		}
	}
	
}
