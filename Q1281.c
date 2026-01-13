int subtractProductAndSum(int n) {
    int dig=0,sum=0,prod=1;
   while(n>0) {
        dig=n%10;
        sum=sum+dig;
        prod=prod*dig;
        n=n/10;
   } 
   return prod-sum;
}
