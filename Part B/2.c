#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int n, fd1, fd2;
    char buf[10];


    if(argc != 3){
        printf("Usage: ./a.out Src_name Dest_name\n");
        exit(1);
    }

    if((fd1 = open(argv[1],O_RDONLY)) == -1){
        printf("Can't Open file %s for Reading\n",argv[1]);
        exit(1);
    }

    if((fd2 = open(argv[2],O_WRONLY | O_CREAT | O_TRUNC , 0744)) == -1){
        printf("Can't open file %s for writing\n",argv[2]);
        close (fd1);
        exit(1);
    }

    while ((n = read (fd1, buf, sizeof(buf)))>0){
        write(1,buf,n);
        write(fd2,buf,n);
    }

    close (fd1);
    close (fd2);

    return 0;
}
