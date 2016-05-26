#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char *s1, char *s2);

int main(){
  char str1[100], str2[100];
  char *duplicateString, *end, *sub, len1=0, len2=0;
  printf("Please enter first string:\n");
  fgets(str1, 100, stdin);
  printf("Please enter second string:\n");
  fgets(str2, 100, stdin);

  //remove enter character from both strings
  end = str1;
  while(*end){
    end++;
    len1++;
  }
  end--;
  *end = '\0';
  end = str2;
  while(*end){
    end++;
    len2++;
  }
  end--;
  *end = '\0';

  if(len1 != len2) {
    printf("%s is not a substring of %s\n", str2, str1);
    return 0;
  }

  duplicateString = concat(str1, str1);

  if(duplicateString == NULL){
    return -1;
  }
  sub = strstr(duplicateString, str2);
  if(sub) {
    printf("%s is a substring of %s\n", str2, str1);
  } else {
    printf("%s is not a substring of %s\n", str2, str1);
  }
  free(duplicateString);
  return 0;
}

char* concat(char *s1, char *s2){
    char *result = malloc(strlen(s1)+strlen(s2)+1);
    if(result == NULL){
        return NULL;
    }
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}
