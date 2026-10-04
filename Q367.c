
bool isPerfectSquare(int num) {
    int odd=1;
    while(num>0){
        num=num-odd;
        odd+=2;
    }
    if (num==0) return 1;
    return 0;
}
