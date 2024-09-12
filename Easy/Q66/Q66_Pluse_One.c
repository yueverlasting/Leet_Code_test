/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

    for(int i = digitsSize-1; i>=0; i--){
        /* check the have carry or not */
        if(digits[i] < 9){
            digits[i] = digits[i]+1;
            *returnSize = digitsSize; /* set returnSize */
            return digits;
        }
        
        digits[i] = 0;
    }

    /* have carry */
    int* final = malloc((digitsSize+1) * sizeof(int));
    final[0] = 1;
    *returnSize = digitsSize+1; /* set returnSize */

    /* copy data to final */
    for(int j=1; j < (digitsSize+1); j++){
        final[j] = digits[j-1];
    }
    return final;
}