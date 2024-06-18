#include <stdio.h>
int main(){
  int myNum[] = {1, 2, 3, 4};
  printf("the size of the array is: %lu", sizeof(myNum)/sizeof(myNum[0]));
  return 0;
}
//the output is 4, cuz we have divided by size of one integer
