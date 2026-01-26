bool isSameAfterReversals(int num) {
    long long rev=0,rev2=0;
    if(num==0) return 1;

    for(int i=num;i!=0;i=i/10){
        rev=rev*10+i%10;
    }
    for(int j=rev;j!=0;j=j/10){
        rev2=rev2*10+j%10;
    }
    if(num==rev2) return 1;
    else return 0;
}
