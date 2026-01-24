int sumOfTheDigitsOfHarshadNumber(int x) {
   int dig=0;
   for(int i=x;i!=0;i=i/10) {
      dig=dig+i%10;
   }
   if(x%dig==0) return dig;
   else return -1;
}
