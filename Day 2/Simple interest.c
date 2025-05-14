#include <stdio.h> 
int main() {
   float p,n,r,si;
   printf("Enter the principal amount:\n");
   scanf("%f",&p);
   printf("Enter the number of years:\n");
   scanf("%f",&n);
   printf("Enter the rate of interest:\n");
   scanf("%f",&r);
   si=(p*n*r)/100;
   printf("Simple Interest:%f",si);
return 0;
}    