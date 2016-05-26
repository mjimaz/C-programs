#include <stdio.h>
int main(){
  int length;
  char str[100], *end;

  printf("Please enter a string\n");
  fgets(str, 100, stdin);
  printf("Please enter the length\n");
  scanf("%d",&length);

  end = str;

  while(*end){
    end++;
  }
  end--;
  //replace enter character with null
  *end-- = '\0';

  while(length-- > 0){
    if(str[length] == ' '){
      *end-- = '0';
      *end-- = '2';
      *end-- = '%';
    } else {
      *end-- = str[length];
    }
  }
  printf("The new String: %s\n", str);
  return 0;
}
