/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:51 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:51 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:35 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:28:08 CST. */
/*
 * hdr.h - include file for segy offset array
 * THIS HEADER FILE IS GENERATED AUTOMATICALLY - 
 * see the Makefile in this directory
 */

#ifndef HDR_H
#define HDR_H

static struct {
	char *key;	char *type;	int offs;
} hdr[] = {
	{   "tracl",		"i",		0},
	{   "tracr",		"i",		4},
	{    "fldr",		"i",		8},
	{   "tracf",		"i",		12},
	{      "ep",		"i",		16},
	{     "cdp",		"i",		20},
	{    "cdpt",		"i",		24},
	{    "trid",		"h",		28},
	{     "nvs",		"h",		30},
	{     "nhs",		"h",		32},
	{    "duse",		"h",		34},
	{  "offset",		"i",		36},
	{   "gelev",		"i",		40},
	{   "selev",		"i",		44},
	{  "sdepth",		"i",		48},
	{    "gdel",		"i",		52},
	{    "sdel",		"i",		56},
	{   "swdep",		"i",		60},
	{   "gwdep",		"i",		64},
	{  "scalel",		"h",		68},
	{  "scalco",		"h",		70},
	{      "sx",		"i",		72},
	{      "sy",		"i",		76},
	{      "gx",		"i",		80},
	{      "gy",		"i",		84},
	{  "counit",		"h",		88},
	{   "wevel",		"h",		90},
	{  "swevel",		"h",		92},
	{     "sut",		"h",		94},
	{     "gut",		"h",		96},
	{   "sstat",		"h",		98},
	{   "gstat",		"h",		100},
	{   "tstat",		"h",		102},
	{    "laga",		"h",		104},
	{    "lagb",		"h",		106},
	{   "delrt",		"h",		108},
	{    "muts",		"h",		110},
	{    "mute",		"h",		112},
	{      "ns",		"u",		114},
	{      "dt",		"u",		116},
	{    "gain",		"h",		118},
	{     "igc",		"h",		120},
	{     "igi",		"h",		122},
	{    "corr",		"h",		124},
	{     "sfs",		"h",		126},
	{     "sfe",		"h",		128},
	{    "slen",		"h",		130},
	{    "styp",		"h",		132},
	{    "stas",		"h",		134},
	{    "stae",		"h",		136},
	{   "tatyp",		"h",		138},
	{   "afilf",		"h",		140},
	{   "afils",		"h",		142},
	{  "nofilf",		"h",		144},
	{  "nofils",		"h",		146},
	{     "lcf",		"h",		148},
	{     "hcf",		"h",		150},
	{     "lcs",		"h",		152},
	{     "hcs",		"h",		154},
	{    "year",		"h",		156},
	{     "day",		"h",		158},
	{    "hour",		"h",		160},
	{  "minute",		"h",		162},
	{     "sec",		"h",		164},
	{  "timbas",		"h",		166},
	{    "trwf",		"h",		168},
	{  "grnors",		"h",		170},
	{  "grnofr",		"h",		172},
	{  "grnlof",		"h",		174},
	{    "gaps",		"h",		176},
	{   "otrav",		"h",		178},
	{      "d1",		"f",		180},
	{      "f1",		"f",		184},
	{      "d2",		"f",		188},
	{      "f2",		"f",		192},
	{  "ungpow",		"f",		196},
	{ "unscale",		"f",		200},
	{     "ntr",		"i",		204},
	{    "mark",		"h",		208},
	{"shortpad",		"h",		210},
};
#endif
