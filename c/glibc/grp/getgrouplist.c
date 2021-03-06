/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 06月 14日 星期五 09:05:12 CST. */
/* 
 Copyright (C) Rong Tao @Beijing

 Permission is granted to copy, distribute and/or modify this document
 under the terms of the GNU Free Documentation License, Version 1.3
 or any later version published by the Free Software Foundation;
 with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
 Texts. A copy of the license is included in the section entitled ‘‘GNU
 Free Documentation License’’.
   2019年 03月 14日 星期四 19:24:24 CST. 
*/
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 13日 星期三 08:53:54 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 12日 星期二 15:07:31 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 08日 星期五 08:10:09 CST. */
/* Copyright (c) Colorado School of Mines, CST.*/
/* All rights reserved.                       */

/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:27:47 CST. */
/* Copyright (C) Rong Tao @Sylincom Beijing, 2019年 03月 07日 星期四 20:26:54 CST. */
/*
 *	int setgroups (size t count, gid t *groups) [Function]
 *	This function sets the process’s supplementary group IDs. It can only be called from
 *	privileged processes. The count argument specifes the number of group IDs in the
 *	array groups.
 *	This function returns 0 if successful and -1 on error. The following errno error
 *	conditions are defned for this function:
 *	EPERM The calling process is not privileged.
 *
 *
 *
 *	int initgroups (const char *user, gid t group) [Function]
 *	The initgroups function sets the process’s supplementary group IDs to be the normal
 *	default for the user name user. The group group is automatically included.
 *	This function works by scanning the group database for all the groups user belongs
 *	to. It then calls setgroups with the list it has constructed.
 *	The return values and error conditions are the same as for setgroups.
 *
 *
 *	int getgrouplist (const char *user, gid t group, gid t *groups, int [Function]
 *	*ngroups)
 *	The getgrouplist function scans the group database for all the groups user belongs
 *	to. Up to *ngroups group IDs corresponding to these groups are stored in the array
 *	groups; the return value from the function is the number of group IDs actually stored.
 *	If *ngroups is smaller than the total number of groups found, then getgrouplist
 *	returns a value of -1 and stores the actual number of groups in *ngroups. The group
 *	group is automatically included in the list of groups returned by getgrouplist.
 *	Here’s how to use getgrouplist to read all supplementary groups for user:
 */

#include <unistd.h>
#include <sys/types.h>
#include <malloc.h>
#include <pwd.h>

//int setgroups (size_t count, gid_t *groups);
//int initgroups (const char *user, gid_t group);

#include <grp.h>
//int getgrouplist (const char *user, gid_t group, gid_t *groups, int *ngroups);


gid_t *supplementary_groups (char *user)
{
	int igroups, ngroups = 16;
	gid_t *groups = (gid_t *) malloc (ngroups * sizeof (gid_t));
	struct passwd *pw = getpwnam(user);
	if (pw == NULL)
		return NULL;

    printf("%s\n", pw->pw_name);
    
	if (getgrouplist (pw->pw_name, pw->pw_gid, groups, &ngroups) < 0)
	{
		groups = realloc (groups, ngroups * sizeof (gid_t));
		getgrouplist (pw->pw_name, pw->pw_gid, groups, &ngroups);

	}
    for(igroups=0;igroups<ngroups;igroups++) {
        struct group *_group = getgrgid(groups[igroups]);
        
        printf("%s:%s:%d:\n", _group->gr_name, pw->pw_name, _group->gr_gid);        
    }
	return groups;
}

int main()
{
	supplementary_groups("rongtao");

	return 0;
}
