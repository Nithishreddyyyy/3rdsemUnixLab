#include <stdio.h>
#include <unistd.h>

int main(){
    pid_t pid;
    printf("Main\n");
    if((pid = fork()) == -1){
        printf("Fork Error");
        return -1;
    }

    if(pid == 0){
        sleep(5);
        printf("Child : %d \t Orphan's Parent : %d\n ",getpid(),getppid());
    }

    if(pid>0){
        printf("Original Parent: %d\n",getpid());
        return 0;
    }
    return 0;
}
