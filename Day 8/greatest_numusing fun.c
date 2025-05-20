#include <stdio.h>
int greatest(int a,int b,int c){
    if(a>b&&a>c){
         return a;  
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
       return c;
    }
}
int main(){
    int a,b,c,result;
    printf("Enter a,b,c:");
   scanf("%d %d %d",&a,&b,&c);
    result=greatest(a,b,c);
    printf("The greatest of %d,%d and %d is %d:",a,b,c,result);
    return 0;
}
