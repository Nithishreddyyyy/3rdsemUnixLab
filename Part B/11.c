#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// 1. Catch the signal

void handler(int signo){
    printf("\nSignal handler : caught signal number is : %d\n",signo);
    exit(0);
}
int main(){
    signal (SIGINT , handler);
    while(1){
        printf("Hello\t");
    }
    return 0;
}

// 2. default signal handling program

/*
int main(){
    signal(SIGINT , SIG_DFL);
    while(1){
        printf("Hello\t");
        fflush(stdout);
    }
    return 0;
}
*/

// Ignore Signal
/*
int main(){
    signal(SIGINT , SIG_IGN);
    while(1){
        printf("Hello\t");
    }
    return 0;
}
 */
