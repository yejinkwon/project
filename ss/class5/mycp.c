#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

#define BFSZ 1024
int main(int argc, char *argv[])
{
	int nb;
	int fd;
	int fd1;
	char a[BFSZ];
	if(argc != 3)
	{
		fprintf(stderr,"mycp filename filename2");
		exit(0);
	}
	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		perror("fd fail");
		exit(errno);
	}
	fd1 = open(argv[2], O_WRONLY|O_CREAT,0666);
	if(fd1 == -1)
	{
		perror("fd1 fail");
		exit(errno);
	}
	while(nb = read(fd,a,BFSZ))
	{
		write(fd1,a,nb);
	}

	close(fd);
	close(fd1);
	return 0;
}
