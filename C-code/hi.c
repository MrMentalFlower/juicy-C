#include <stdio.h>
#include <string.h>

void info();
void help();
void numbs();
void greet(char *name);


int main(int x, char *y[]){
  if(x == 1){
    info();
  }

  if(x == 2){
    if( strcmp(y[1], "-h") == 0){
      help();
    }
    if( strcmp(y[1], "-d") == 0){
      numbs();
    }
    else{
      greet(y[1]);
    }
  }



}

void info(){
  printf("type -h for more info.\n");
}

void help(){
  printf("type: hello {name} for a proper greeting.\n");
}

void numbs(){
  printf("1234\n");
}

void greet(char *name){
  printf("Hey yo whas up %s\n", name);
}
