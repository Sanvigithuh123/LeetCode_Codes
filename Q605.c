bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int count=0;
    int prev=0;
    for(int i=0;i<flowerbedSize;i++){
        if(flowerbed[i]==1){
            if(prev==1) count--;
            prev=1;
        }
        else{
            if(prev==1) prev=0;
            else{
                count++;
                prev=1;
            }
        }
    }
    return count>=n;
}
