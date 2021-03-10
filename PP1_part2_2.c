#indclude<stdio.h>
#indclude<unistd.h>
#indclude<stdlib.h>
#indclude<sys/wait.h>

int main(){
    int num;
    //Get number of child processes
    printf("Enter number of child processes");
    scanf("%d",&num);

    for(int i = 0; i < num; i++){
        pid_t p = fork(); //create child processes
        if(p < 0) { //error
            printf("error \n");
        }
        if(p > 0){ //parent process
            wait(NULL);
            break;
        }else{ //child process
            printf("hello this is %d \n", getpid());
        }
    }
    return 0;
}