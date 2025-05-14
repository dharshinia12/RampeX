#include <stdio.h> 
int main() {
   int year;
   printf("Enter Year:");
   scanf("%d",&year);
   if(year%4==0&&year%100!=0){
       printf("It's a Leap Year");
   }else{
       printf("Not a leap year");
   }
return 0;
}    