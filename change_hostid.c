#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
system("clear");
printf(" change_hostid | A useful utility to change the hostid value\n\n");
printf(" ");
printf("Compatible with all linux version, including Ubuntu 10\n\n");
printf(" ");
printf("Writen by Eduardo L. Arana for LocuLinux Distribution - www.loculinux.org\n\n");
printf(" ");
printf("Usage: ./change_hostid newhostid (example 728b7432)\n\n");

if(argc < 2)
{
fprintf(stderr," Missing new hostid argument: please assign one (example 728b7432).\n\n",argv[0]);
return 1;
}
printf("Changing the host id of the current machine...\n");
sethostid(
strtoul(argv[1],NULL,16));
return 0;
printf("hostid changed, please run ./hostid command to see the results...\n");
}

