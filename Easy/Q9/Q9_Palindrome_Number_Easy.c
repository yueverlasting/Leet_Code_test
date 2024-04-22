#include <math.h>

bool isPalindrome(int x) {
    /* Minuse number always false */
    if(x < 0){
        return false;
    }

    /* 0-9 */
    if(x/10 == 0){
        return true;
    }

    /* Try to count X have how many digits. */
    int temp=0, num=0;
    temp = x;
    while(temp != 0){
        temp /= 10;
        num++;
    }

    int pow_num=0, bigger_half=0;
    pow_num = pow(10,(num/2));

    if(num%2 == 1){ /* 10000-99999, 1000000-9999999, 100000000-999999999, 10000000000  -99999999999 */
        bigger_half = x / (pow_num*10);
    }
    else{ /* 1000-9999, 100000-999999, 10000000-99999999, 1000000000-9999999999 */
        bigger_half = x / pow_num;
    }

    int smaller_half = x % pow_num;
    {
        int reverse_half = 0;
        int digit_num = num/2; /* Make sure can count all number include 0 */
        while (digit_num>0) {
            int digit = smaller_half%10;
            reverse_half = reverse_half * 10 + digit;
            smaller_half /=10;
            digit_num--;
        }
            
        if (reverse_half == bigger_half){
            return true;
        }else{
            return false;
        }
    }
    return false;
}