bool isHappy(int n) {
    while(n!=1){
        if(n>1 && n<7){ /* 7 is the first happy after 1*/
            return false;
        }

        int new_sum = 0, temp=0;
        while(n!=0){
            temp = n%10;
            new_sum += temp*temp;
            n = n/10;
        }
        n = new_sum;
    }
    return true;
}