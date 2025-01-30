#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
    pid_t pid;
    int status;
    puts("Main");

    if((pid = fork())==-1){
        puts("Fork Error");
        exit(0);
    }

    if(pid == 0){
        puts("Child");
        exit(0);
    }

    if(pid>0){
        wait(&status);
        puts("Parent\n");
        system("ps u");
    }
    puts("end\n");
    return 0;
}
