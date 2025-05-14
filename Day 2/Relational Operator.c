#include <stdio.h>

int main() {
    int a=100;
    int b=160;
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else if(a==b){
        printf("%d is equals to %d",a,b);
    }
    else if(a!=b){
        printf("%d is not equal to %d",a,b);
    }
    else{ 
        printf("%d is less than %d",a,b);
    }
   
    
    return 0;
}