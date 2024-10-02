void moveZeroes(int* nums, int numsSize) {
    if(numsSize == 1) return;

    int not_zero = 0;
    for(int i=0; i<numsSize; i++){
        if(nums[i] != 0){
            nums[not_zero] = nums[i];
            not_zero++;
        }
    }

    for(int j=not_zero; j<numsSize; j++){
        nums[j] = 0;
    }
}