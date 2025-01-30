#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>

int main(){
    int pfds[2];
    char buf[30];

    if(pipe(pfds) == -1){
        perror("pipe");
        exit(1);
    }

    printf("writing to file desc #%d\n",pfds[1]);
    write(pfds[1],"test",5);

    printf("reading from file descriptior #%d\n",pfds[0]);
    read(pfds[0],buf,5);

    printf("read : %s\n",buf);

    return 0;
}
/*
int main()
{
    int n, pfds[2];
    char buf[30];
    pid_t pid;

    if (pipe(pfds) == -1)
    {
        perror("pipe");
        exit(1);
    }

    if ((pid = fork()) == -1)
    {
        perror("Fork Errror");
        return 0;
    }

    if (pid > 0) //parent
    {
        close(pfds[0]);
        write(pfds[1], "hello\n", 7);
    }

    if (pid == 0) //child
    {
        close(pfds[1]);
        n = read(pfds[0], buf, 7);
        write(1, buf, n);
    }

    return 0;
}
 */
