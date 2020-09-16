#!/bin/sh

config_os=$1
config_release=$2
uname_machine=$3

uname_sysname=`echo $config_os | sed 's/[0-9.]*$//'`
if test $uname_sysname != $config_os; then
  config_release=`echo $config_os | sed s/$uname_sysname//`
fi

if test -r /vmunix; then
  kernel_id=`strings /vmunix | grep UNIX`
elif test -r /dynix; then
  kernel_id=`strings /dynix | grep DYNIX`
else
  kernel_id=
fi

kernel_release=`echo "$kernel_id" | sed 's/^[^0-9.]*\([0-9.]*\).*$/\1/'`
if test x`echo "$config_release" | sed "s/^$kernel_release//"` \
       != x$config_release; then
  # The configuration release is a substring of the kernel release.
  uname_release=$kernel_release
elif test x$config_release != x; then
  uname_release=$config_release
elif test x$kernel_release != x; then
  uname_release=$kernel_release
else
  uname_release=unknown
fi

kernel_version=`echo "$kernel_id" | sed 's/^[^#]*#\([0-9]*\).*$/\1/'`
if test -n "$kernel_version"; then
  uname_version="$kernel_version"
else
  uname_version=unknown
fi

cat <<EOF
/* This file is generated by $0.  DO NOT EDIT.

   This is used only by the generic uname function for systems with no real
   uname call.  If this data is not correct, it does not matter much.  */

#define UNAME_SYSNAME "$uname_sysname"
#define UNAME_RELEASE "$uname_release"
#define UNAME_VERSION "$uname_version"
#define UNAME_MACHINE "$uname_machine"
EOF

