
#include <stdio.h>

int main() {
    // Write C code here
    int a[6]={1,2,55,3,77,58};
    int max=0;
    int m=0;
    int b[6];
    for(int i=0;i<6;i++){
        if(a[i]>max){
            m=max;
            max=a[i];
        }
      else if(a[i]>m && a[i]!=max){
          m=a[i];
      }
       
    }
   
    printf("%d",m);
    for(int i=0;i<6;i++){
        b[i]=a[5-i];
        printf("b[%d]=%d\n",i,b[i]);
    }
   
    for(int i=0;i<6/2;i++){
         int temp=0;
        temp=a[i];
        a[i]=a[5-i];
        a[5-i]=temp;
       
    }
    for(int i=0;i<6;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}