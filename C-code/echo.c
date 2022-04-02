/*************************************************************
/$$$$$$$                      /$$                                  /$$$$$$  /$$
| $$__  $$                    | $$                                 /$$__  $$| $$
| $$  \ $$  /$$$$$$   /$$$$$$ | $$$$$$$   /$$$$$$   /$$$$$$       | $$  \__/| $$$$$$$   /$$$$$$   /$$$$$$
| $$$$$$$  |____  $$ /$$__  $$| $$__  $$ /$$__  $$ /$$__  $$      |  $$$$$$ | $$__  $$ /$$__  $$ /$$__  $$
| $$__  $$  /$$$$$$$| $$  \__/| $$  \ $$| $$$$$$$$| $$  \__/       \____  $$| $$  \ $$| $$  \ $$| $$  \ $$
| $$  \ $$ /$$__  $$| $$      | $$  | $$| $$_____/| $$             /$$  \ $$| $$  | $$| $$  | $$| $$  | $$
| $$$$$$$/|  $$$$$$$| $$      | $$$$$$$/|  $$$$$$$| $$            |  $$$$$$/| $$  | $$|  $$$$$$/| $$$$$$$/
|_______/  \_______/|__/      |_______/  \_______/|__/             \______/ |__/  |__/ \______/ | $$____/
                                                                                               | $$
                                                                                               | $$
_______________________________________________________________________________________________|___________
This program is to create a simple clone of the echo command while using case switching.
2022/04/2
**************************************************************/
#include <stdio.h>
#include <unistd.h>

//args function argv needs to be ** which is a pointer to pointer
void args(int argc,char **argv,int opt);


// begining of the main running function.
int main(int argc, char *argv[]) {
  int opt;
  //calls the args function.
  args(argc, argv, opt);
}


void args(int argc,char **argv,int opt){
  /*
  this is the code for running with getopt and the ":f:hv" defines
  what commands are going to be recognized by getopt and the :f: defines input
  for f.
  */
    while((opt = getopt(argc, argv, ":f:hv"))!= -1){
      switch (opt) {
        case 'f':
          printf("%s\n", optarg);
          break;

        case 'h':
          printf("This program is a clone of the echo command\n");
          break;

        case'v':
          printf("Version:0.01\n");
          break;

        case ':':
          printf("Option needs a value\n");
          break;

        case '?':
          printf("unknown option: %c\n", optopt);
          break;
      }
    }
}
