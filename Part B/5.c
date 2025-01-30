#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
    pid_t pid;
    printf("Main\n");

    if((pid= vfork())==-1){
        puts("fork error");
        exit(0);
    }

    if(pid == 0)
        printf("Child: %d; Parent ID : %d\n",getpid(),getppid());
    if(pid>0)
        printf("Parent: %d ; Parent id : %d\n",getpid(),getppid());
    puts("\nEnd\n");
    return 0;
}
