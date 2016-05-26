#include <stdio.h>
#include <string.h>

void reverse(char* str);
void reverse2(char* str);

int main(){
  char str[100];
  printf("Please enter a string to be reversed:\n");
  fgets(str, 100, stdin);
  reverse(str);
  printf("The reversed string using method1:%s\n", str);
  reverse2(str);
  printf("The reversed string using method2:%s\n", str);
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

void reverse2(char* str){

  char *end = str, temp;

  while(*end){
    end++;
  }
  end--; //before null characters

  while(str < end){
    temp = *str;
    *str++ = *end;
    *end-- = temp;
  }
}
