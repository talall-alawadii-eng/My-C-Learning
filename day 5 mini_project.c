#include <stdio.h>

int main() {
    // Write C code here
    int n;
    int max=0;
    int sum=0;
    int counter=0;
    printf("please enter number of students:");
    scanf("%d",&n);
    if(n<=0){
        printf("INVALID NUMBER OF STUDENTS");
        return 0;
    }
int st[n];
int g;
for(int i=0;i<n;i++){
    printf("please enter grade for student number %d:",i+1);
    scanf("%d",&g);
    if(g<0 || g>100){
        printf("out of range !!\n");
        i--;
        continue;
    }
    st[i]=g;
    if(g>=50){
        counter++;
        sum+=g;
    }
    if(max<st[i]){
        max=st[i];
    }
}
printf("number of students who passed:%d\n",counter);
if (counter > 0) {
        float f = (float)sum / counter;
        printf("avg mark for passed students:%.2f\n", f);
    } else {
        printf("avg mark for passed students: 0.00 (No students passed)\n");
    }
printf("Highest Grade:%d\n",max);
float f2=(float) counter/n*100;
printf("pass percentage %.2f%%",f2);
    return 0;
}