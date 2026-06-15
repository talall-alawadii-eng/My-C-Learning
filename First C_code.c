#include <stdio.h>

int main() {
    // Write C code here
    printf("Talall Alawadii first code \n");
    int a=10;
    int b=15;
    printf("The value of a is %d and the value of b is %d\n",a,b);
    float x=9.30;
    float y=8.88;
    printf("The value of float x is %.2f and the value of float y is %.2f\n",x,y);
    char c='T';
    printf("My letter is (%c)\n",c);
    char t[6]="Talal";
    printf("My name is : %s\n",t);
    printf("The last later of my name:(%c)\n",t[4]);
    int n1,n2,n3;
    printf("Please enter the value for first int:");
    scanf("%d",&n1);
    printf("Please enter the value for second int:");
    scanf("%d",&n2);
    printf("Please enter the value for third int:");
    scanf("%d",&n3);
    int sum=n1+n2+n3;
    printf("The sum of the 3 integers:%d\n",sum);
    int numbers[10];
    // First have of the array is garbage the second half is 0's
    numbers[5]=5;
    printf("%d\n",numbers[4]);
    printf("%d\n",numbers[5]);
    printf("%d\n",numbers[6]);
    printf("Please enter three numbers you want to save in the array:");
    scanf("%d %d %d",&numbers[0],&numbers[1],&numbers[2]);
    printf("Your numbers are %d,%d and %d\n ",numbers[0],numbers[1],numbers[2]);
    
    

    return 0;
}