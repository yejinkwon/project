#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
/*
int main(int argc, char *argv[])
{
	int fp;
	fp = open("testtest.txt",O_RDONLY);
	printf("%d \n",fp);
}
*/

int main(int argc, char *argv[])
{
	int fd;
	if(argc != 2)
	{
		fprintf(stderr, "usage: opentest filename\n");
		exit(0);
	}
//	printf("argv[0] : %s\n",argv[0]);
//	printf("argv[1] : %s\n",argv[1]);
	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		perror("open ");
		exit(errno);
	}
	else
	{
		printf("open %s sucessful\n",argv[1]);
	}
	close(fd);
	return 0;
}

