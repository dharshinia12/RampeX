#include <stdio.h> 
int main() {
    int Tam,Eng,Maths,sci,Social;
    printf("Enter tamil Marks:\n");
    scanf("%d",&Tam);
    printf("Enter English Marks:\n");
    scanf("%d",&Eng);
    printf("Enter Maths Marks:\n");
    scanf("%d",&Maths);
    printf("Enter Science Marks:\n");
    scanf("%d",&sci);
    printf("Enter Social Marks:\n");
    scanf("%d",&Social);
    int Total=Tam+Eng+Maths+sci+Social;
    printf("Total Marks=%d\n",Total);
    int Avg=Total/5;
    printf("Total Average=%d",Avg);
return 0;
}  