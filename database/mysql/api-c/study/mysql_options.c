/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:54 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:53 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 18:23:33 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 18:12:17 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 17:20:50 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 14:00:31 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 13:38:03 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 11:33:18 CST. */
#include "config.h"

#include <stdlib.h>
#include <stdio.h>

#include <mysql.h>

int main(int argc, char **argv) 
{
	MYSQL *mysql = NULL;

	mysql = mysql_init(mysql);

	if (!mysql) {
		puts("Init faild, out of memory?");
		return EXIT_FAILURE;
	}

	/**
	 *	int	STDCALL mysql_options(MYSQL *mysql,
	 *								enum mysql_option option,
	 *								const void *arg);
	 *
	 *	MYSQL_OPT_CONNECT_TIMEOUT, MYSQL_OPT_COMPRESS, MYSQL_OPT_NAMED_PIPE,
	 *	MYSQL_INIT_COMMAND, MYSQL_READ_DEFAULT_FILE, MYSQL_READ_DEFAULT_GROUP,
	 *	MYSQL_SET_CHARSET_DIR, MYSQL_SET_CHARSET_NAME, MYSQL_OPT_LOCAL_INFILE,
	 *	MYSQL_OPT_PROTOCOL, MYSQL_SHARED_MEMORY_BASE_NAME, MYSQL_OPT_READ_TIME
	 *	MYSQL_OPT_WRITE_TIMEOUT, MYSQL_OPT_USE_RESULT,
	 *	MYSQL_OPT_USE_REMOTE_CONNECTION, MYSQL_OPT_USE_EMBEDDED_CONNECTION,
	 *	MYSQL_OPT_GUESS_CONNECTION, MYSQL_SET_CLIENT_IP, MYSQL_SECURE_AUTH,
	 *	MYSQL_REPORT_DATA_TRUNCATION, MYSQL_OPT_RECONNECT,
	 *	MYSQL_OPT_SSL_VERIFY_SERVER_CERT, MYSQL_PLUGIN_DIR, MYSQL_DEFAULT_AUTH
	 *	MYSQL_ENABLE_CLEARTEXT_PLUGIN,
	 * // MariaDB options 
	 *	MYSQL_PROGRESS_CALLBACK=5999,
	 *	MYSQL_OPT_NONBLOCK=6000
	 *
	 */
	int sec = 5;
	if(mysql_options(mysql, MYSQL_OPT_CONNECT_TIMEOUT, (const void *)&sec /* 5sek */))
	{
		printf("MySQL Options failed: %s\n", mysql_error(mysql));
	}
	else
	{
		puts("MySQL Options OK\n");
	}

	if (!mysql_real_connect(mysql,       /* MYSQL structure to use */
				MYSQL_HOST,  /* server hostname or IP address */ 
				MYSQL_USER,  /* mysql user */
				MYSQL_PWD,   /* password */
				MYSQL_DB,        /* default database to use, NULL for none */
				0,           /* port number, 0 for default */
				NULL,        /* socket file or named pipe name */
				CLIENT_FOUND_ROWS /* connection flags */ )) 
	{
		puts("Connect failed\n");
	} 

	mysql_close(mysql);

	return EXIT_SUCCESS;
}

