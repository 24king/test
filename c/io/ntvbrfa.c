/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:37 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:37 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:21 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:57 CST. */
/*
\n 换行
\t 制表符
\v 垂向制表符
\b 退格
\r 回车
\f 换页
\a 响铃

    三字转义字符
??=  #            ??(  [            ??<  {
??/  \            ??)  ]            ??>  }
??'  ^            ??!  |            ??-  ~
      
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\v ??= ??/ ??' ??( ??) ??! ??< ??> ??- \n");
    
    return 0;
}