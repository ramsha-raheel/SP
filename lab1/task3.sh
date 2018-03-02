#!/bin/bash
UNIX=('Debian' 'Redhat' 'Ubuntu' 'Suse' 'Feora')
echo ${UNIX[*]}
echo ${#UNIX[*]}
echo ${#UNIX[2]}
echo ${UNIX[@] :3:2}
echo ${UNIX[@]/"Ubuntu"/"SCO Unix"}
temp=(${UNIX[@]} "AIX" "HP-UX")
echo ${temp[*]}
unset UNIX[3]
echo ${UNIX[*]}
linux=(${UNIX[@]})
echo ${linux[*]}
bash=(${UNIX[@]} ${linux[@]})
echo ${bash[*]}
unset UNIX[*] linux[*]
