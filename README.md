change_hostid
=============

A useful utility to change the hostid on Linux Distributions. Writen for my own linux distribution LOCULINUX.

Installation:

Copy the current change_hostid.c to your linux distribution and compile using the next command: gcc change_hostid.c -o change_hostid

Usage (you may need root privileges):
./change_hostid newhostid

Example:
./change_hostid 123a4567

Check if the new hostid has been setup:
./hostid

I hope you find this usefull.
