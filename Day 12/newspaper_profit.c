#include <stdio.h>

int main() {
    int w,x,y;
    scanf("%d %d %d",&w,&x,&y);
    int revenue=w*x;
    int cost=(w*y)+100;
    int profit=revenue-cost;
    printf("%d\n",profit);
    return 0;
}