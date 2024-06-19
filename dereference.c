#include <stdio.h>
int main(){
  int myAge = 43;
  int* shit = &myAge;
  printf("%d\n", myAge);
  printf("%p\n", shit);
  printf("%i\n", *shit);
}
