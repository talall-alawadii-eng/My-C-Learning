#include <stdio.h>


int main() {
    // Write C code here
    char text []="Talall Alawadi";
    char key;
    printf("pls enter key letter to unlock:");
    scanf("%c",&key);
    int i=0;
    int f=0;
    while(text[i]!='\0'){
        if(text[i]==key){
            printf("unlocked");
            f=1;
            break;
        }
        i++;
    }
    if(!f) printf("failed");
    return 0;
}