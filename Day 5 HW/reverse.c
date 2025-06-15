#include<stdio.h>
int main()
{
    int n,rev=0,val;
    printf("Enter a number : ");
    scanf("%d",&n);
    val=n;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    printf("Reverse of the %d is %d ",val,rev);
    return 0;
}