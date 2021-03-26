#include "main.h"

int main(){
    
    
    pid_t child = fork();
    if (child < 0)
    {
        printf("Failed to fork() --- exiting...\n");
        exit(1);
    }
    else if (child == 0)
    {
        char *args[] = {"./execmain" , NULL };
        if (execv(args[0], args) < 0)
        {
            printf("*** Failed to exec\n");
            exit(1);
        }
    }
    else
    {
        char *args[] = {"./execmain2" , NULL };
        if (execv(args[0], args) < 0)
        {
            printf("*** Failed to exec\n");
            exit(1);
        }
        
    }
    return 0;
}
