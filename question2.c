#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(){
	int fd, len;
	char write_buf[30]="who are you?";
	char read_buf[30];
	
	fd= open("know.txt", O_CREAT |O_RDWR , 777);
	len = write(fd,write_buf,30);
	printf("return value form write optn = %d\n",len);
	lseek(fd,4,SEEK_SET);
	lseek(fd,2,SEEK_CUR);
	lseek(fd, 2, SEEK_END);
	read(fd,read_buf,len);
	printf("read buffer data is :\n %s\n", read_buf);
	close(fd);
	return 0;
	
	}
