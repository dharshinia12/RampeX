#include <stdio.h>
#include <math.h>
int power(int x,int y) 
{
  return pow(x,y);
}
int main() {
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Power of %d and %d is:%d",a,b,power(a,b));
    return 0;
}
