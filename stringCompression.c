#include <stdio.h>

int main(){
  char str[100], compressed[200], currentChar;
  int i, count = 1, j=0, isCompressed=0;

  printf("Please enter a string:\n");
  fgets(str, 100, stdin);
  currentChar = str[i++];

  while(str[i]){
    if(str[i] == currentChar) {
      count++;
    } else {
      compressed[j++] = currentChar;
      compressed[j++] = count+'0';
      count = 1;
      currentChar = str[i];
    }
    if(!isCompressed && count > 1){
      isCompressed = 1;
    }
    i++;
  }

  compressed[j] = '\0';
  if(isCompressed){
    printf("The compressed string %s\n", compressed);
  } else {
    printf("The compressed string %s\n", str);
  }
  return 0;
}
