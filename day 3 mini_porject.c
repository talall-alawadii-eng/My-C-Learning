#include <stdio.h>

int main() {
    // Write C code here
    char x;
    float r;
    float l;
    float w;
    float a;
    printf("please enter the letter for the shape u want:");
    scanf("%c",&x);
    if(x=='r' || x=='R'){
        printf("your shape is rectangle please enter the following:\n");
        printf("Lenght=");
        scanf("%f",&l);
        printf("Width=");
        scanf("%f",&w);
        a=w*l;
        printf("Area of rectangle=%0.2f",a);
    }
    else if(x=='c'||x=='C'){
        printf("your shape is circle please enter the following:\n");
        printf("Radius=");
        scanf("%f",&r);
        a=3.141592654*r*r;
        printf("Area of circle=%0.4f",a);
    }
    else if(x=='t'||x=='T'){
         printf("your shape is right angle triangle please enter the following:\n");
         printf("Base=");
         scanf("%f",&w);
         printf("Hight=");
         scanf("%f",&l);
         a=0.5*w*l;
         printf("Area of triangle=%0.2f",a);
    }
    else{
        printf("Invalid shape!!");
    }
    

    return 0;
}