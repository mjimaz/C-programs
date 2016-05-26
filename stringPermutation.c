#include <stdio.h>
#include <string.h>

int main(){
  char str1[100], str2[100];
  int str1chars[256] = {0}, str2chars[256]={0};
  int char1, char2, i, permutation = 1;
  printf("Please enter two strings:\n");
  fgets(str1, 100, stdin);
  fgets(str2, 100, stdin);

  // if they aren't equal in length return false
  if(strlen(str1) != strlen(str2)){
    printf("Strings are not a permutation of one another\n");
  } else {
    //assume ascii characters
    for(i=0; i<strlen(str1); i++){
      char1 = str1[i];
      char2 = str2[i];
      str1chars[char1]++;
      str2chars[char2]++;
    }

    for(i=0; i<256; i++){
      if(str1chars[i] != str2chars[i]){
        permutation = 0;
        break;
      }
    }

    if(permutation == 1) {
      printf("Strings are a permutation of one another\n");
    } else {
      printf("Strings are not a permutation of one another\n");
    }
  }

  return 0;
}
