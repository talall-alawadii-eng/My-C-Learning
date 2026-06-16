#include <stdio.h>

int main() {
    // Write C code here
    int i;
    printf("please enter 4 digit number:");
    scanf("%d",&i);
    int th=i/1000;
    th=th*1000;
   // printf("%d\n",th);
    int h=i%1000;
    h=h/100;
    h=h*100;
  //  printf("%d\n",h);
    int te=i%100;
    te=te/10;
    te=te*10;
   // printf("%d\n",te);
    int m=i%10;
   // printf("%d",m);
    printf("%d=%d+%d+%d+%d",i,th,h,te,m);

    return 0;
}