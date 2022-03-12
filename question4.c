#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(){
	char c[50];
	int fd , fd1,size;
	fd=open ("read.txt",O_RDONLY | O_CREAT );
	fd1= open("write.txt", O_WRONLY);
	size = read(fd,c,20);
	if (write(fd1,c,strlen(c))==-1)
	{
		printf("error while writing to the file \n");
		exit(0);
	 }
                 
               else
                 {
                 
                 	printf("wrote %d bytes to the file \n",strlen(c));
                 }
               }
