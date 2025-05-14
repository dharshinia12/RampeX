#include <stdio.h>

int main() {
   char op;
   int a=3,b=8;
   printf("Enter Operator:");
   scanf("%c",&op);
   switch(op)
   {
       case '+':
       printf("result=%d\n",a+b);
       break;
       case '-':
       printf("result=%d\n",a-b);
       break;
       case '*':
       printf("result=%d\n",a*b);
       break;
       default:
       printf("Error");
   }

    return 0;
}