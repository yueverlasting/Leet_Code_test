uint32_t reverseBits(uint32_t n) {
    int reversed[32];
    uint32_t result=0;
    int i = 0;
    while(n>0 && i<32){ /* change to array & reverse it */
        reversed[i] = (n%2==1) ? 1 : 0;
        n=n/2;
        i++;
    }
    for(int j=31; j>-1; j--){   /* tran to uint32 */
        result += reversed[j]*pow(2,31-j);
    }
    return result;
}