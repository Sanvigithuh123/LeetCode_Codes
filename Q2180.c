int countEven(int num) {
    int count=0,sum=0;

    for(int i=1;i<=num;i++) {
        sum=0;
      for(int j=i;j>0;j=j/10) {
        sum=sum+(j%10);
      }  
      if(sum%2==0)
      count++;
    }
    return count;
}
