#include <stdio.h> 
int main() {
   float basic,hra,da,gross_pay;
   printf("Enter basic,hra,da:");
   scanf("%f%f%f",&basic,&hra,&da);
   gross_pay=basic+hra+da;
   printf("Gross pay:%f",gross_pay);
   return 0;
}    