double minimumAverage(int* nums, int numsSize) {
    double min_avr=0;

    /* Sort it first */
    int i, j, tmp;
    for(i=numsSize-1; i>0; i--){
        for(j=0; j<=i-1; j++){
            if(nums[j] > nums[j+1]){
                tmp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tmp;
            }
        }
    }

    /* Get max and min and calculate avr and only keep the minimum one. */
    for(i=0; i<numsSize-1; i++){
        float a = (float)nums[i];
        float b = (float)nums[numsSize-1-i];
        double new_avr = (a+b)/2;
        if(new_avr < min_avr || min_avr == 0) min_avr = new_avr;
    }

    return min_avr;
}