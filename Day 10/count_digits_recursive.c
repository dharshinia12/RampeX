#include <stdio.h>
int countDigits(int number) {
    int count=1;
    if (number==0){
        return 0;   
    }
    else{
        return count+countDigits(number/10);
    }

}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Number of digits: %d\n",countDigits(num));
    return 0;
}