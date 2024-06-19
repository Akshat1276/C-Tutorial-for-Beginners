#include <stdio.h>
int main(){
  FILE *damn;
  damn = fopen("filename.txt", "a");
  fprintf(damn, "bobby\n");
  fclose(damn);
}
