#include <stdio.h>

int main() {
    // Write C code here
    printf("note:my way not official way\n");
     int d1=0;
    int d2=0;
    int x;
  //  int c;
    printf("please enter positive integer number:");
    scanf("%d",&x);
    int y;
    printf("please enter second positive integer number:");
     scanf("%d",&y);
    
    if(x<=0 || y<=0){
        printf("INVALID!!\n");
        return 0;
    }
    int max=0;
    int size;
    if(x>=y){
        size=y;
        if(x%y==0) max=y;
    }
    else if(y>x){
        size=x;
        if (y%x==0) max=x;
    }
   else if(x==y){
       max=x;
   }
    if(max!=x && max!=y){
    for(int i=1;i<=size;i++){
        if(x%i==0){
            d1=i;
       }
        if(y%i==0){
            d2=i;
    }
        
        if(d2==d1){
            max=d1;
        }
    }
    }
 printf("highest common factor is %d",max);
    return 0;
}