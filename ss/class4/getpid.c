#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
//	printf("%d\n", getpid());
	pid_t mypid;
	mypid = getpid();
	printf("my pid is %ld\n",(long)mypid);
}
