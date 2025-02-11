#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int status;
int my_system(const char *cmd){
    pid_t pid;
    if(cmd == NULL)
        return 1;

    if((pid = fork())<0)
        status = -1;
    else if (pid ==0){
        execl("/bin/sh","sh","-c",cmd,(char *)0);
        _exit(127);
    }
    else{
        while(waitpid(pid,&status,0)<0){
            if(errno != EINTR){
                status = -1;
                break;
            }
        }
    }
    return status;
}

int main(void){
    if((status = my_system("date; exit 0"))< 0)
        perror("System error");
    if((status = my_system ("daaaate"))<0)
        perror("System error");
    if ((status = my_system ("Who; exit 44")) < 0)
        perror("System error");
    exit (0);
}
