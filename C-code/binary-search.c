#include <stdio.h>
#include <stdlib.h>
#define SIZE_MAX 1000000000




// int `size` = SIZE_MAX;

int main(){
  long int *foo = malloc(SIZE_MAX * sizeof(*foo));

for (int i = 0; i <= SIZE_MAX; i++) {
  foo[i] = i;
}


  printf("%ld\n", foo[95]);

  // free(foo);
  return 0;
}
