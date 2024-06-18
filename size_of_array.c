#include <stdio.h>
int main(){
  int myNum[] = {1, 2, 3, 4};
  printf("the size of the array is: %lu", sizeof(myNum));
  return 0;
}
//the output is 16 and not 4, cuz the size of every int is 4 byte
