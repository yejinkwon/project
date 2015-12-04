#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int num;
	int nb;
	int fd;
	int fd1;
//	char a[BFSZ];
	int i;
	if(argc == 3 || argc == 4)
	{
		num = atoi(argv[2]);

		fd = open(argv[1], O_WRONLY | O_CREAT | O_APPEND, 0666);
		if(fd == -1)
		{
			perror("open file");
			exit(errno);
		}
		for(i=0;i<num;i++)
		{
			if(argc == 3)
			{write(fd,"y",1);}
			else
			{
				lseek(fd,0,SEEK_END);
				write(fd,argv[3],1);}
		}
	}


/*
	O_APPEND djqtdorh
	lseek(fd, 0 , SEEK_END);
	write(fd, "x", 1 )
*/
/*

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
*/
	close(fd);
//	close(fd1);
	return 0;
}
