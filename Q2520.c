int countDigits(int num) {
    int dig=0,count=0;
    for(int i=num;i!=0;i=i/10) {
        dig=i%10;
        if(num%dig==0) count++;
    }
    return count;
}
