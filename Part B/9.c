#include <stdio.h>
#include <unistd.h>

void charatatime(char *str){
    int i = 0;
    setbuf(stdout , NULL);
    while(str[i]!='\0'){
        putc(str[i],stdout);
        i++;
    }
}

int main(int argc , char * argv[]){
    pid_t pid;
    if((pid = fork()) == -1){
        printf("Fork Error\n");
        return -1;
    }

    if(pid == 0)
        charatatime("CHILD PROCESS WRITING DATA TO THE TERMINAL\n");
    if(pid > 0)
        charatatime("parent process writing data to the terminal\n");
    return 0;
}
