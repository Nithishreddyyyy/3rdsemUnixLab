#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
    pid_t pid;
    puts("Main");

    if((pid = fork()) == -1){
        puts("Fork Error");
        exit(0);
    }

    if (pid == 0){
        printf("Child\n");
        exit(0);
    }
    if(pid > 0){
        sleep(5);
        printf("Parent\n");
        system("ps u");
    }
    printf("End\n");
    return 0;
}

/*
int main(){
    int status;
    pid_t pid;
    puts("Main");

    if((pid = fork()) == -1){
        printf("Fork Error\n");
        return -1;
    }

    if(pid == 0){
        printf("Child\n");
        exit(0);
    }

    if(pid>0){
        wait(&status);
        printf("Parent\n");
        system("ps u");
    }
    printf("End\n");
    return 0;
}
*/
