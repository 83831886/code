#!/bin/bash
##备份数据库脚本
## http://www.aqzt.com
##email: ppabc@qq.com
##robert yu
id="root"
pwd="Wkp120709!"
#dbs="aqzhw  testdb " 
dbs="test" 
backuppath="/home/mysqldatabak"
day=15
[ ! -d $backuppath ] && mkdir -p $backuppath
cd $backuppath

backupname=$(date +%Y-%m-%d)
for db in $dbs;
do
   mysqldump -u$id -p$pwd -S /var/lib/mysql/mysql.sock $db >$backupname_$db.sql 
   if [ "$?" == "0" ] 
   then
       echo $(date +%Y-%m-%d)" $db  mysqldump sucess">>mysql.log 
   else
      echo $(date +%Y-%m-%d)"  $db mysql dump failed">>mysql.log
      exit 0
   fi
done
for db in $dbs;
do
	tar -czf $db.$backupname.tar.gz $db.sql
done
if [ "$?" == "0" ]
then
   echo $(date +%Y-%m-%d)" tar sucess">>mysql.log
else
   echo $(date +%Y-%m-%d)" tar failed">>mysql.log
   exit 0
fi
rm -f *.sql
delname=mysql_$(date -d "$day day ago" +%Y-%m-%d).tar.gz
rm -f $delname
#恢复mysql数据库
#先建立新数据库（名称和之前的一样）
#use $NAME
#source $mysql.sql
