#include <stdio.h>
#include <string.h>

int main(){
  char str[100];
  int i, j, len;
  printf("Determines if a string has all unique characters.\n");
  printf("Please enter a string:\n");
  fgets(str, 100, stdin);

  len = strlen(str);

  for(i=0; i<len-1; i++){
    for(j=i+1; j<len; j++){
      if(str[i] == str[j]) {
        printf("String has duplicate characters\n");
        return 0;
      }
    }
  }
  printf("String has unique characters\n");
  return 0;
}
