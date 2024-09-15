int searchInsert(int* nums, int numsSize, int target) {

    /* O(log n) runtime complexity */
    /* binary search algorithm */
    
    /* Smaller that the first one */
    if(nums[0] > target || nums[0] == target) return 0;

    /* Bigger than last one */
    if(nums[numsSize-1] < target) return numsSize;

    /* Only have one element in nums */
    if(numsSize == 1) return (nums[0] > target) ? 0 : 1;

    int start = 0, final = numsSize;
    int mid = (start+final)/2;

    /* check bigger that the half or smaller */
    while(final - start > 0){
        if(final == (start+1)){
            return final-1;
        }
        if(nums[mid-1] > target){ /*smaller*/
            final = mid;
        }else if (nums[mid-1] < target){ /* bigger */
            start = mid;
        }else{
            return mid-1;
        }
        mid = (start+final)/2;        
    }

    return final-1;
}