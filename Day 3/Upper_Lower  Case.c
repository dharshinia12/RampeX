#include <stdio.h>

int main() {
  char ch;
  printf("Enter the Character:");
  scanf("%c",&ch);
  if(ch>='A'&&ch<='Z'){
      printf("%c is a Uppercase",ch);
  }
  else if(ch>='a' && ch<='z'){
      printf("%c is a Lowercase",ch);
  }else{
      printf("Error");
  }
       
    return 0;
}