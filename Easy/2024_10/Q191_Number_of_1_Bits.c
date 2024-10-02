int hammingWeight(int n) {
    /* dec to bin */
    int temp[32];
    int i=0, result=0;
    while(n>0){
        temp[i]=n%2;
        if(temp[i] == 1) result++; /* if temp == 1, direct ++ */
        //printf("temp[%d] = %d result=%d\n",i , temp[i], result);
        n=n/2;
        i++;
    }
    return result;
}