int titleToNumber(char* columnTitle) {
    /* Get size of str */
    int str_size = strlen(columnTitle);
    int final_num = 0, pow_num=0, temp=0;

    /*  AA = 1*26 + 1
        AAA = 1*26pow2 + 1*26pow1 + 1*26pow0 = 703 */

    for(int i = str_size-1; i>-1; i--){
        temp = columnTitle[i]-'A'+1;             // Trans char to int
        pow_num = (int) pow(26, (str_size-1-i)); // count power of 26 and tran form double to int.
        final_num += pow_num*temp;                   // count final number
    }

    return final_num;
}