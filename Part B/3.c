#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int argc, char * argv[]){
    int fd,n,newseek;
    char c[2];

    if(argc<2){
        puts("Insuff Arguments: ./a.out File name");
        return -1;
    }

    if((fd = open (argv[1],O_RDONLY)) == -1){
        printf("Unable to open\n");
        return -1;
    }

    while((n = read (fd , c ,1))>0){
        printf("Char is %c\n",c[0]);
        newseek = lseek(fd,4,1);

        printf("New offset is %d\n",newseek);
    }
    return 0;
}
