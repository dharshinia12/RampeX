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
    printf("Total Average=%d\n",Avg);
    if(Avg>=90){
            printf("A grade\n");
        }
        else if(Avg>=80){
            printf("B grade\n");
        }
        else if(Avg>60){
            printf("C grade\n");
        }
        else {
            printf("F\n");
        }
        if(Avg>=35){
            printf("PASS\n");
        }
        else{
            printf("FAIL\n");
        }
    
return 0;
}    