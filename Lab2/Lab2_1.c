#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

pid_t pid = getpid();
for(int i = 0; i<1000; i++){
	sleep(2);
	printf("%d - %d \n", pid, i);
}
	exit(0);

}