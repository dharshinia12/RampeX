#include <stdio.h>

int main() {
    int l,b;
    scanf("%d%d",&l,&b);
    int fence=2*(l+b);
    int area=l*b;
    printf("%d %d",fence,area);
    return 0;
}