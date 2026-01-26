int reverse(int x){
    long long rev=0;
    
    for(int i=x;i!=0;i=i/10) {
        rev=rev*10+i%10;
    }
    if(rev<-2147483648 || rev>2147483647) return 0;
    else return rev;
}
