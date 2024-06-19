#include <stdio.h>
int main(){
  FILE *damn;
  damn = fopen("filename.txt", "w");
  fclose(damn);
}
