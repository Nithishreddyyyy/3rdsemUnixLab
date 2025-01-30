#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
//Link File

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Insufficient Args use: ./a.out Source_name Dest_name");
        return -1;
    }
    if((link(argv[1],argv[2]))==-1)
        printf("\nUnable to create link file");
    else
        printf("\nSuccessfully created a link file with the name :%s",argv[2]);
    return 0;
}
// Rename a file

/*
int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Insufficient Args Use: $./a.out Source Dest\n");
        return -1;
    }

    if((link (argv[1],argv[2]))==-1)
        printf("Unable to create link file\n");
    else{
        unlink(argv[1]);
        printf("new name is %s\n",argv[2]);
    }
    return 0;
}*/
//Delete one file
/*
int main(int argc, char *argv[]){
    if(argc<2){
        printf("Error... Use atleast: $./a.out Src_name dest_name");
        return -1;
    }

    if((unlink(argv[1]))==-1)
        printf("Unable to delete file\n");
    else
        printf("File delete is %s\n",argv[1]);
    return 0;
}*/
/*
//Delete Multiple file
int main(int argc, char *argv[]){
    int i = 1;
    if(argc <2){
        printf("Error ... Use atleast : $./a.out Filename");
        return -1;
    }

    while (i<argc){
        if((unlink (argv[i])) == -1)
            printf("Unable to delete files\n");
        else
            printf("File deleted is: %s\n",argv[i]);
        i++;
    }
    return 0;
}
*/
