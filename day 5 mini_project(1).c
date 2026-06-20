int main() {
    // Write C code here
    char st[20]="I study in PSUT";
    for(int i=0;i<20;i++){
        if(st[i]==' '){
        for(int j=i;j<20;j++){
            st[j]=st[j+1];
        }
    }
}
for(int i=0;i<20;i++){
    printf("%c",st[i]);
}
    return 0;
}