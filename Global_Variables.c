#include <stdio.h>
int x=5;
void myab(){
  int x = 15;
  printf("%i\n", x);
}
int main(){
  myab();
  printf("%i\n", x);
}
