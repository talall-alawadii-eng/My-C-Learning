
int main() {
    // Write C code here
    int a[6]={1,2,55,3,77,58};
    int max=0;
    int m=0;
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
    

    return 0;
}