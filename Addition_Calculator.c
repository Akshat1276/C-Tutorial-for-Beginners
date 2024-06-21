#include <stdio.h>

void add(){
  int x, y;
  printf("eter 1st no. ");
  scanf("%d", &x);
  printf("Enter 2nd no. ");
  scanf("%d", &y);
  int z = x+y;
  printf("The sum of the 2 numbers is: %i", z);
}
int main(){
  add();
  return 0;
}
