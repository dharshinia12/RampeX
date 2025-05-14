

#include <stdio.h>

int main() {
  char month;
  printf("Enter the Month:");
  scanf("%c",&month);
  switch(month){
      case '1':
      case '3':
      case '5':
      case '7':
      case '8':
      case 'O':
      printf("%c has 31 Days",month);
      break;
      case '4':
      case '6':
      case '9':
      case 'N':
      case 'D':
      printf("%c has 30 Days",month);
      case '2':
      printf("February");
     
  }
       
    return 0;
}