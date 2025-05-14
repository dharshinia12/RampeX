#include <stdio.h>

int main() {
  char day;
  printf("Enter the day:");
  scanf("%c",&day);
  switch(day){
      case '1':{
          printf("%c is Monday",day);
          break;
      }
      case '2':{
          printf("%c is Tuesday",day);
          break;
      }
      case '3':{
          printf("%c is Wednesday",day);
          break;
      }
      case '4':{
          printf("%c is Thursday",day);
          break;
      }
      case '5':{
          printf("%c is Friday",day);
          break;
      }
      case '6':{
          printf("%c is Saturday",day);
          break;
      }
      case '7':{
          printf("%d is Sunday",day);
          break;
      }
      default:
      printf("Error");
  }
      
       
    return 0;
}
