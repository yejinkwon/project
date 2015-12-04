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
	int fd_in;
	int fd_out;
	struct stat c_in;
	char a[BFSZ];
	if(argc != 3)
	{
		fprintf(stderr,"mycp filename filename2");
		exit(0);
	}
	fd_in = open(argv[1], O_RDONLY);
	if(fd_in == -1)
	{
		perror("fd_in fail");
		exit(errno);
	}
	fd_out = open(argv[2], O_WRONLY|O_CREAT,0666);
	if(fd_out == -1)
	{
		perror("fd_out fail");
		exit(errno);
	}

	stat(argv[1],&c_in);

	chmod(argv[2],c_in.st_mode);

	while(nb = read(fd_in,a,BFSZ))
	{
		write(fd_out,a,nb);
	}

	close(fd_in);
	close(fd_out);
	return 0;
}
