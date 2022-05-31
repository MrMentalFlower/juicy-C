#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080
//the amount of characters enterable to be sent
#define ARRSIZE 10000


// int listen();
// int send();



//function for all the commands in the program to be called when : is declared
//all commands will be handled with a characther such as 'y' or 'x' this is simpler and may be changed later for more complex commands
void commands(char *input){
  // the value that determines if the input has a propper command or not
  int inpft = 0;
  //the for loop is for making sure that the string for the command doesn't have anything after the command letter is called
  for (int i = 2; i < 10; i++){
    printf("%d\n", input[i]);
    if (input[i]>0) {
     inpft = 1;
      i = 10-1;
    }
  }

  //this is where all of the command characters will be and what functions they will reference will go inside the case switches
  if  (inpft == 0) {
    switch (input[1]) {
      case 'c':
        printf("connect command\n");
        break;

        case 'd':
        printf("disconect command\n");
        break;

        case 'h':
        printf("help command\n");
        break;

        case 'q':
        printf("exit program command\n");
        break;

        default:
        printf("type :h to get help\n");

    }
  }

  //incase you don't enter the command correctly
  else{
    printf("testing\n");
  }
}


//main logic for running the text and talking with a person
void run(){
  //main loop for the program that takes input
  while(1){
    char input[ARRSIZE] = {0};
    scanf("%[^\n]%*c", input);
    //if statement for determining if the text entered should be sent or call a command
    if (input[0] == ':') {
      commands(input);
    }
    else{
      printf("%s\n", input);
    }
  }

}


int main(void){
  //the main function that takes on most of the features of the app.
  run();

}
