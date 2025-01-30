#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

void pr_exit(int status){
    if(WIFEXITED(status))
        printf("Normal termination, exit status: %d\n",WEXITSTATUS(status));

    if(WIFSIGNALED(status))
        printf("Abnormal termination, signal number : %d\n",WTERMSIG(status));
}

int main(){
    pid_t pid, childpid;
    int status , i;
    if((pid = fork()) == -1){
        printf("Fork Error\n");
        return 0;
    }

    if(pid == 0)
        exit(23);
    childpid = wait(&status);
    pr_exit(status);

    if((pid=fork()) == -1){
        printf("Fork Error");
        return 0;
    }
    if(pid == 0)
        abort();

    childpid = wait(&status);
    pr_exit(status);

    if((pid=fork()) == -1){
        perror("Fork error");
        exit (0);
    }

    if(pid == 0)
        i = 5/0;
    childpid = wait(&status);
    pr_exit(status);
    return 0;
}
