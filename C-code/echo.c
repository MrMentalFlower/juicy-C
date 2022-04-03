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
#include <ctype.h>

//args function argv needs to be ** which is a pointer to pointer
void args(int argc,char **argv,int opt);


// begining of the main running function.
int main(int argc, char *argv[]) {
  int opt;
  //calls the args function.
  args(argc, argv, opt);

  //prints dog if there are no arguments but there is text after the command.
}


void args(int argc,char **argv,int opt){
  /*
  this is the code for running with getopt and the ":f:hv" defines
  what commands are going to be recognized by getopt and the :f: defines input
  for f.
  */
    while((opt = getopt(argc, argv, ":c:hv"))!= -1){
      switch (opt) {
        case 'c':
          int i;
          char chr;
            while(optarg[i]){
              chr = optarg[i];
              printf("%c", toupper(chr));
              i++;
            }
          printf("\n");
          break;

        case 'h':
          printf("This program is a clone of the echo command.\n"
                  "To use this command you can pass straight text or pass options.\n"
                  "All text should be put into quotations\n"
                  "\n"
                  "-c          Capitalizes all letters inputed.\n"
                  "-h          Brings you to this prompt.\n"
                  "-v          Shows the version\n");
          break;

        case 'v':
          printf("Version:0.01\n");
          break;

        case ':':
          printf("Value required\n");
          break;

        case '?':
          printf("type -h to get help\n");
          break;
      }
    }

    if(argc == 1){
      printf("type -h to get help\n");
    }

}
