#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char *argv[]){
    struct stat st;
    if(argc<2){
        puts("Insuff usage : ./a.out Filename");
        exit (0);
    }
    if((stat(argv[1],&st))==-1){
        puts("Stat Err......\n");
        exit (0);
    }

    printf("The file is %s is :\n",argv[1]);
    switch(st.st_mode & S_IFMT){
        case S_IFBLK:
            puts("Block Device");
            break;
        case S_IFCHR:
            puts("Char device file");
            break;
        case S_IFDIR:
            puts("Directory file");
            break;
        case S_IFIFO:
            puts("Pipe file");
            break;
        case S_IFLNK:
            puts("Link File");
            break;
        case S_IFREG:
            puts("Regular File");
            break;
        default:
            puts("Unknown file");
    }
    printf("The inode number is: %ld\n",st.st_ino); //better to use llu instead of ld
    return 0;
}
