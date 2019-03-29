#!/bin/bash
#计算程序启动花费的时间
DATE=`date "+%s"`
systemctl start mysqld
while :
do
	ps -ef|grep -v grep|grep mysqld >/dev/null
	if test $? -eq 0 
	then
		TIME=$((`date "+%s"`-$DATE))
		echo $TIME
		exit 0
	fi
done
