#!/bin/bash
/sbin/iptables -F
/sbin/iptables -X
/sbin/iptables -Z

/sbin/iptables -A INPUT -s 127.0.0.1 -d 127.0.0.1 -j ACCEPT
/sbin/iptables -A INPUT -s 127.0.0.1 -j ACCEPT
/sbin/iptables -A INPUT -m state --state ESTABLISHED,RELATED -j ACCEPT
/sbin/iptables -A OUTPUT -j ACCEPT
/sbin/iptables -A INPUT  -p tcp --dport 80  -j ACCEPT
#允许ping规则
#/sbin/iptables -A INPUT  -p icmp  -j ACCEPT
/sbin/iptables -A INPUT -j REJECT
/sbin/iptables -A FORWARD -j REJECT

iptables-save
/sbin/iptables  -nL
echo ok
