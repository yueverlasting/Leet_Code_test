int removeDuplicates(int* nums, int numsSize) {
    /* if only have one element in num */
    if (numsSize == 1)
        return numsSize;

    /* Set the final start at 1 */
    int final = 1;

    /* Get prev & now */
    int prev = nums[0];
    for(int i = 0; i < numsSize - 1; i++) {        
        int now = nums[i + 1];
        if (prev != now) { /* if not the same, keep element.*/
            nums[final] = now;
            prev = nums[i + 1];
            final++;
        }
    }
    return final;
}