#include <stdio.h>

char *hi(){
  char *x = "hi";

  return x;
}

char *hello(){
  char *x = "hello";

  return x;
}

char *nope(){
  char *x = "nope";

  return x;
}



int main(void) {
  int x = 0;

  char *funray[100] = {hi(), hello(), nope()};

  printf("%s\n", funray[x]);


  return 0;
}
