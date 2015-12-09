#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{
	pid_t a;
	int status;
	int i=0;
	int j=0;
	a = fork();

	if(a == 0)
	{
		printf("child %d %d\n",(int)getpid(),(int)getppid());
		execl("/bin/ps","ps","-ef",NULL  );
		exit(123);
	}
	else if(a == -1)
	{
		exit(0);
	}
	else
	{
		printf("parent %d %d\n",(int)getpid(),(int)getppid());
		wait(&status);
		printf("exit code : %d \n",WEXITSTATUS(status));
	}
}

