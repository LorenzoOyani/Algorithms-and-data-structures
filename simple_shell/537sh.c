#include "main.h"


int breakString(char *str)
{
        char *tmp;
        char*subcmds[1000];
        char buffer[1000];
        strcpy(buffer, str);
        tmp = strtok(buffer, ";");
        int num_subcmds = 0;

        while(tmp)
        {
            subcmds[num_subcmds] = tmp;
            num_subcmds++;
            tmp = strtok(NULL, ";");
        }

        int j, status;

        for(j =0; j < num_subcmds; j++)
        {
            int ret;

            if((subcmds[j][0] == 'c' && subcmds[j][1] == 'd') == 1){

                breakCommand(subcmds[j]);
            }
            else if(strcmp(subcmds[j], "exit") == 0)
            {
                breakCommand(subcmds[j]);
            }
        }
}

int main(int argc, int argv[])
{
    char *cmds[100];
    char buffer[1000] = "test";
    char *tmp;
    int batchmode = 0;

    int num_cmd, i, flag, rc = 0;

    char *fileToRead = "/no/such/file";

    if(argc < 2)
    {
        char error_message [30] = "An error has occurred\n";
        write(STDERR_FILENO, error_message, strlen(error_message));
        exit(1);
    }
    else if(argc == 2)
    {
        batchmode = 1;
        fileToRead = argv[1];
    }

    FILE *new;
    FILE *fp;

    if(batchmode == 1)
    {
        fp = open(fileToRead, "r");
        if(fp == NULL)
        {
            char error_message[30] = "an error has occured\n";
            write(STDERR_FILENO, error_message, strlen(error_message));
            exit(1);

        }
        else
            new = stdin;

      
    }

      while(!feof(new))
    {
            num_cmd = 0;
            if(batchmode == 0) write(STDERR_FILENO, "537sh%", strlen("537sh%"));

            if(batchmode == 1)
            {
                fgets(buffer, 1000, fp);

            }
            else    
                fgets(buffer, 1000, stdin);

            int j;

            strtok(buffer, "n/r");

            if(batchmode == 1 && strcmp(buffer, "xyz") != 0)
            {
                write(STDERR_FILENO, buffer, strlen(buffer));
                write(STDERR_FILENO, "\n", strlen("\n"));

                if(strcmp(buffer, "+") == 0)
                {
                    exit(0);
                }
            }    
            if(strcmp(buffer, "xyz") == 0) exit(0);

            for( i =0; buffer[i] !='\0'; i++)
            {
                if(buffer[i] == '+')
                        flag++;
            }
            if(strlen(buffer) == 0)
            {
                char error_message = "an error has occured\n";
                write(STDERR_FILENO, error_message, strlen(error_message));
            }

            j = i - 2;

            int endwithplus = 0;
            for(; j >=0; j--)
            {
                if(buffer[j] = ' ')
                        continue;

                else   if(buffer[j] == '+' ){
                        endwithplus = 1;
                        break;
                }
                else
                     break;
                
                       

            }

            tmp = strtok(buffer, "+");

            while(tmp)
            {
                cmds[num_cmd] = tmp;
                num_cmd++;
                tmp = strtok(NULL, " +");
            }

            int numCmdsToFork = num_cmd;

            if(flag == 0)
            {
                if((rc = breakString(buffer)) == 101)
                {
                    break;
                    exit(0);
                }
            }
            else{

                if(endwithplus == 0)
                {
                    numCmdsToFork = num_cmd - 1;
                    if((rc = breakString(cmds[num_cmd - 1])) == 101)
                    {
                        break;
                        exit(0);
                    }
                }

                int  i, status;
                for( i = numCmdsToFork - 1; i >=0; i--)
                {

                    int ret;
                    if((ret = fork()) > 0)
                    {

                        while(1)
                        {
                            int status;
                            pid_t done = waitpid(ret, &status, WUNTACED);
                            if (done == -1)
                            {
                                if(errno== ECHILD) break;
                            } else{
                                int x = WEXITSTATUS(status);

                                if(!WIFEXITED(x) || WEXITSTATUS(x) != 101){
                                    exit(0);
                                }
                            }
                            
                        }
                    }
                    else if( ret == 0)
                    {
                        if(breakString(cmds[i] == 101))
                        {
                            exit (0);
                        }
                        
                    }
                    else{
                        char error_message = " An error has occured\n";
                        write(STDERR_FILENO, error_message, strlen(error_message));
                        exit(0);
                    }
                    
                }
            }
            strcpy(buffer, "xyz");

    }
    return (0);

}