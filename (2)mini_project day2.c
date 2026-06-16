#include <stdio.h>

int main() {
    // Write C code here
    int i;
    int sum;
   printf("please enter 4 digit number:");
   scanf("%d",&i);
   int d1=i%100;
   d1=d1*100;
   int d2=i/100;
   sum=d1+d2;
   printf("the swap of the first 2 digit with the last 2 digit is %04d",sum);
   
   

    return 0;
}