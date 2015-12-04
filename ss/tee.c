#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<string.h>

int main(int argc, const char *argv[])
{
	int fd;
	int n;
	char buf[4096];
	
	if(argc !=2){
		fprintf(stderr, "err");
	}
	fd = open(argv[1], O_WRONLY | O_CREAT | O_APPEND, 0666);

	if(fd == -1)
	{
		perror("failure");
		return 1;
	}
	while((n = read(STDIN_FILENO, buf, 4096) > 0))
	{
		printf("%s",buf);
		write(fd, buf, strlen(buf));
	}
}


