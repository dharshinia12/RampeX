#include <stdio.h> 
int main() {
   int a,b,c;
   printf ("Enter the values:");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b&&a>c){
       printf("a is maximum");
   }else if(b>>a&&b>c){
   printf("b is maximum");
   }
   else{
       printf("c is maximum");
   }
return 0;
}    