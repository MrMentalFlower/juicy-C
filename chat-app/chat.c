#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080

char input[10000];
// int listen();
// int send();


//function for all the commands in the program to be called when : is declared
int commands(char *input){

  switch (input[1]) {
    case 'h':
      printf("help command\n");
      break;

      case 'q':
        printf("exit\n");
        break;

    default:
      printf("type :h to get help\n");
  }
}

//main logic for running the text and talking with a person
char run(){
  while(1){
    scanf("%s", input);
    if (input[0] == ':') {
      commands(input);
    }
    else{

    }
  }

}

int main(void){
  //the main function that takes on most of the features of the app.
  run();

}
