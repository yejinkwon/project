#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
int main(int argc, char *argv[])
{
	DIR *a;
	struct dirent *b;
	struct stat c;
	int stat_;
	char pathname[30];
	if(argc != 2)
	{
		fprintf(stderr, "usage: myls dir-name\n");
		exit(0);
	}
	a = opendir(argv[1]);
	if(a == NULL)
	{
		perror("opendir");
		exit(0);
	}

	while(1)
	{
		b = readdir(a);
		if(b == NULL)break;

		if(argv[1][strlen(argv[1])-1] == '/')
		{
			sprintf(pathname,"%s%s",argv[1],b->d_name);
		}
		else
		{
			sprintf(pathname,"%s/%s",argv[1],b->d_name);
		}
		stat_ = stat(pathname,&c);
		printf("%s  ",b->d_name);

		switch(c.st_mode & S_IFMT){
		case S_IFREG : printf("\t reguler file \n");break;
		case S_IFDIR : printf("\t directory file \n");break;
		case S_IFBLK : printf("\t block divice \n");break;
		case S_IFCHR : printf("\t character device\n");break;
		case S_IFIFO : printf("\t FIFO or pipe\n");break;
		case S_IFSOCK : printf("\t socket\n");break;
		case S_IFLNK : printf("\t symbolic link\n");break;
		default : printf("1");break;
}

/*		if(S_ISREG(c.st_mode))
		{
			printf("\tregular file\n");
		}*/
	//	else if((c->st_mode & SIFMT))
	}
}
