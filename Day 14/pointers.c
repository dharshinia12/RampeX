#include <stdio.h>
int main() {
    int a=15;
    int *p=&a;
    printf("%p\n",&a);
    printf("%d\n",*p);
    printf("%p\n",p);
     printf("%p\n",p+1);
    return 0;
}