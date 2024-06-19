#include <stdio.h>
int x=5;
int myfunc(){
  return x++;
}

int main(){
  myfunc();
  printf("%d\n",x);
}
