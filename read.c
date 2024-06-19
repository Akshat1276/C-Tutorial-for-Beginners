#include <stdio.h>
int main(){
  FILE *damn;
  damn = fopen("filename.txt", "r");
  char myStr[500];
  fgets(myStr, 500,damn);
  printf("%s", myStr);
  fclose(damn);
}
