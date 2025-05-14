#include <stdio.h>

int main() {
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    int c=a++;
    int d=a--;
    int b=++a;
    int e=--a;
    printf("Post Increment of %d is %d\n",a,c);
    printf("Post Decrement of %d is %d\n",a,d);
    printf("Pre Increment of %d is %d\n",a,b);
    printf("Pre Decrement of %d is %d\n",a,e);
    return 0;
}