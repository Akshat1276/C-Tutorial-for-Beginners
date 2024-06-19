#include <stdio.h>
int main(){
  int shit[] = {1,2,3,4,5,6,7};
  int* shat = shit;
  int i;
  for(i=0; i < 7; i++){
    printf("%i\n", *(shat+i));
  }
}
