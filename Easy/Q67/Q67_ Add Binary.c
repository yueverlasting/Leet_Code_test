char* addBinary(char* a, char* b) {

    int bit_num_a = strlen(a);
    int bit_num_b = strlen(b);    
    int bit_num_final = (bit_num_a > bit_num_b) ? bit_num_a : bit_num_b;

    /* Alloc mem for final string, +2 -> 1 for carry, 1 for \0 */
    char* final = (char*)malloc(bit_num_final + 2);
    final[bit_num_final + 1] = '\0';

    int carry = 0;
    int i = bit_num_a - 1, j = bit_num_b - 1, k = bit_num_final;

    /* Start from the last char */
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0'; // trans to Ascii & count sum
        if (j >= 0) sum += b[j--] - '0'; // trans to Ascii & count sum

        carry = sum / 2; // count carry
        final[k--] = (sum % 2) + '0'; // count bit & trans back to char
    }

    return final+k+1;
}