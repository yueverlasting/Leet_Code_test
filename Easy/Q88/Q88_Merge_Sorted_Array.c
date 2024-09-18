void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int flag = 0;
    int temp = m;

    /* Set Size */
    nums1Size = m+n;
    nums2Size = n;
    int* fianl=malloc(nums1Size*sizeof(int));

    /* Diff nums1 */
    while(temp!=0 && n!=0){
        if(nums1[m-temp] < nums2[nums2Size-n] || nums1[m-temp] == nums2[nums2Size-n]){
            fianl[flag] = nums1[m-temp];
            printf("1 fianl[%d]=%d\n", flag, fianl[flag]);
            temp--;
            flag++;
        }else{
            printf("2 nums1[m-temp]=%d nums1[nums2Size-n]=%d\n", nums1[m-temp], nums2[nums2Size-n]);
            fianl[flag] = nums2[nums2Size-n];
            printf("2 fianl[%d]=%d\n", flag, fianl[flag]);
            n--;
            flag++;
        }        
    }

    /* Only one array left */
    while(temp!=0){
        fianl[flag] = nums1[m-temp];
        temp--;
        flag++;
    }

    while(n!=0){
        fianl[flag] = nums2[nums2Size-n];
        n--;
        flag++;
    }

    /* Copy to num1 */
    for(int j=0;j<nums1Size;j++){
        nums1[j] = fianl[j];
        printf("nums1[%d]=%d\n", j, nums1[j]);
    }
}