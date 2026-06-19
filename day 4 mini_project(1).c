#include <stdio.h>
int main()
{
    int x;
    printf("please enter positive integer number:");
    scanf("%d",&x);
    if(x<=0){
        printf("INVALID!!\n");
        for(int i=0;i<10;i++){
            printf("please enter positive integer number:");
            scanf("%d",&x);
            if(x>0) break;
            else if(i==9){
                printf("too many invalid attempts");
                return 0;
            }
            else if(x<=0) printf("INVALID!!\n");
        }
        
    }
   
    int count=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){
         count++;
        
        printf("diviser number %d is %d\n",count,i);}
        
        
    }
        if(count==2){
            printf("PRIME NUMBER");
        }
        else{
   printf("total number of diviser are %d diviser",count);}
   return 0;
}
