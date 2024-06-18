#include <stdio.h>
int main(){
  int x,y;
  for (x=0; x<=2; x++){
    printf("Outer: %d\n", x);
    for (y=0; y<=3; y++){
      printf("Inner: %d\n", y);
    }
  }
  return 0;
}
