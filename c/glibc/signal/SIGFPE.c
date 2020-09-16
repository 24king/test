/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:22 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:29 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:54:00 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:13 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:51 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:26:57 CST. */
/*
 *	int NSIG [Macro]
 *	The value of this symbolic constant is the total number of signals defned. Since the
 *	signal numbers are allocated consecutively, NSIG is also one greater than the largest
 *	defned signal number.
 *
 *
 *
 *	int SIGFPE [Macro]
 *	The SIGFPE signal reports a fatal arithmetic error. Although the name is derived from
 *	“ﬂoating-point exception”, this signal actually covers all arithmetic errors, including
 *	division by zero and overﬂow. If a program stores integer data in a location which
 *	is then used in a ﬂoating-point operation, this often causes an “invalid operation”
 *	exception, because the processor cannot recognize the data as a ﬂoating-point number.
 *	Actual ﬂoating-point exceptions are a complicated subject because there are many
 *	types of exceptions with subtly diﬀerent meanings, and the SIGFPE signal doesn’t
 *	distinguish between them. The IEEE Standard for Binary Floating-Point Arithmetic
 *	(ANSI/IEEE Std 754-1985 and ANSI/IEEE Std 854-1987) defnes various ﬂoating
 *	point exceptions and requires conforming computer systems to report their occur
 *	rences. However, this standard does not specify how the exceptions are reported, or
 *	what kinds of handling and control the operating system can oﬀer to the programmer.
 *
 *
 *	FPE_INTOVF_TRAP
 *	Integer overﬂow (impossible in a C program unless you enable overﬂow trapping
 *	in a hardware-specifc fashion).
 *	FPE_INTDIV_TRAP
 *	Integer division by zero.
 *	FPE_SUBRNG_TRAP
 *	Subscript-range (something that C programs never check for).
 *	FPE_FLTOVF_TRAP
 *	Floating overﬂow trap.
 *	FPE_FLTDIV_TRAP
 *	Floating/decimal division by zero.
 *	FPE_FLTUND_TRAP
 *	Floating underﬂow trap. (Trapping on ﬂoating underﬂow is not normally en
 *	abled.)
 *	FPE_DECOVF_TRAP
 *	Decimal overﬂow trap. (Only a few machines have decimal arithmetic and C
 *	never uses it.)
 */

#include <signal.h>
#include <stdio.h>

int main()
{
	printf("NSIG = %d\n", NSIG);
	printf("SIGFPE = %d\n", SIGFPE);


	return 0;
}
