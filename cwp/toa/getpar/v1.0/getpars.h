/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:49 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:50 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:34 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:28:08 CST. */
/* Copyright (c) Colorado School of Mines, 2011.*/
/* All rights reserved.                       */

#ifndef PAR_H
#define PAR_H


/* INCLUDES */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>

#include <fcntl.h>      /* non-ANSI */
#include <unistd.h>     /* non-ANSI */
#include <sys/types.h>  /* non-ANSI */


/* GLOBAL DECLARATIONS */
extern int xargc; extern char **xargv;

/* DEFINES */
#define STDIN (0)
#define STDOUT (1)
#define stderr (2)


#ifndef TRUE
#define TRUE (1)
#endif
#ifndef FALSE
#define FALSE (0)
#endif


/* FUNCTION PROTOTYPES */

#ifdef __cplusplus  /* if C++, specify external C linkage */
extern "C" {
#endif

/* getpar parameter parsing */
void initargs (int argc, char **argv);
int getparint (char *name, int *p);
int getparuint (char *name, unsigned int *p);
int getparshort (char *name, short *p);
int getparushort (char *name, unsigned short *p);
int getparlong (char *name, long *p);
int getparulong (char *name, unsigned long *p);
int getparfloat (char *name, float *p);
int getpardouble (char *name, double *p);
int getparstring (char *name, char **p);
int getparstringarray (char *name, char **p);
int getnparint (int n, char *name, int *p);
int getnparuint (int n, char *name, unsigned int *p);
int getnparshort (int n, char *name, short *p);
int getnparushort (int n, char *name, unsigned short *p);
int getnparlong (int n, char *name, long *p);
int getnparulong (int n, char *name, unsigned long *p);
int getnparfloat (int n, char *name, float *p);
int getnpardouble (int n, char *name, double *p);
int getnparstring (int n, char *name, char **p);
int getnparstringarray (int n, char *name, char **p);
int getnpar (int n, char *name, char *type, void *ptr);
int countparname (char *name);
int countparval (char *name);
int countnparval (int n, char *name);
void checkpars( void );

/* ERRORs and log_msg_vcm_warningings */
void log_msg_vcm_error (char *fmt, ...);
void log_msg_vcm_warning (char *fmt, ...);

/* self documentation */
void pagedoc (void);
void requestdoc (int i);

/* string to numeric conversion with ERROR checking */
short eatoh(char *s);
unsigned short eatou(char *s);
int eatoi(char *s);
unsigned int eatop(char *s);
long eatol(char *s);
unsigned long eatov(char *s);
float eatof(char *s);
double eatod(char *s);

void strchop(char *s, char *t);

#ifdef __cplusplus  /* if C++ (external C linkage is being specified) */
}
#endif

#endif /* PAR_H */
