int main() {
    // Write C code here
   int t;
   printf("please enter your time in seconds:");
   scanf("%d",&t);
   int s=t%60;
   int h=t/60/60;
    int m=(t/60)%60;
   printf("%02dH: %02dM: %02dS",h,m,s);



    return 0;
}