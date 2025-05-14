#include <stdio.h>

int main() {
  float temp;
  printf("Enter the Temperature:");
  scanf("%f",&temp);
  if(temp<10){
      printf("Wear Jacket");
  }
  else if(temp>=10&&temp<20){
      printf("Wear Sweater");
  }else{
      printf("Wear T-Shirt");
  }
       
    return 0;
}
