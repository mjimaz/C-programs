#include <stdio.h>
#include <string.h>

void reverse(char* str);

int main(){
  char str[100];
  printf("Please enter a string to be reversed:\n");
  fgets(str, 100, stdin);
  reverse(str);
  printf("The reversed string:%s\n", str);
  return 0;
}

void reverse(char* str){
  int len = strlen(str), i;
  char temp;

  for(i=0; i<len/2; i++){
    temp = str[len-i-1];
    str[len-i-1]=str[i];
    str[i]=temp;
  }
}
