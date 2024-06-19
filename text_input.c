#include <stdio.h>
int main(){
  char myName[30];
  printf("Enter your name: ");
  fgets(myName, sizeof(myName), stdin);
  printf("Hi %s", myName);
  return 0;
}
