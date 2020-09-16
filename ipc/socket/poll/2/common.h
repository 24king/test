/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:06:15 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:25:04 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:44 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:28:16 CST. */
/**
 *  rt 2018.10
 */
#ifndef _COMMON_H
#define _COMMON_H

#define PORT        8888
#define MAX_LINE    2048

#define OPEN_MAX    1024

#define INFTIM      -1

#define LISTENQ     20

int tcpsocket_server();
int tcpsocket_client(const char *ipv4);

int max(int a, int b);
ssize_t readline(int fd, char *vptr, size_t maxlen);

#endif /*<_COMMON_H>*/