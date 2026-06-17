#include <stdio.h>

int main() {
    // Write C code here
    float g ;
    printf("please enter your grade out of 100:");
    scanf("%f",&g);
    if(g<0 || g>100){ 
        printf("ERROR");
        return 0;
    }
    if(g>=90 ) printf("A");
    else if(g>=80) printf("B");
    else if(g>=70) printf("C");
    else if(g>=60) printf("D");
    else 
    printf("F");
     

    return 0;
}