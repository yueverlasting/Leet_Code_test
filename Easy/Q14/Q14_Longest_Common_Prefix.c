char* longestCommonPrefix(char** strs, int strsSize) {
    /* if strsSize == 1, Direct return*/
    if(strsSize==1){
        return strs[0];
    }

    /* Diff 1 & 2 str */
    int strsSize_a = strlen(strs[0]);
    int strsSize_b = strlen(strs[1]);
    int fianl_strsSize = (strsSize_a < strsSize_b) ? strsSize_a : strsSize_b;
    printf("strsSize=%d, fianl_strsSize = %d\n", strsSize, fianl_strsSize);

    /* Get first prefix. */
    char* temp = (char*)malloc(fianl_strsSize + 1);
    temp[fianl_strsSize] = '\0';
    for(int i=0; i<strsSize-1; i++){
        for(int k=0; k<fianl_strsSize; k++){
            if(strs[i][k] == strs[i+1][k]){
                temp[k] = strs[i][k];
            }else{
                fianl_strsSize = k;
                if(fianl_strsSize == 0){
                    return "";
                }
                goto compare;
            }
        }        
    }

    compare:
    /* Compare temp & next str */
    int count = strsSize-2;
    while(fianl_strsSize!=0 && (count > 0)){
        int strsSize_c = strlen(strs[strsSize-count]);
        fianl_strsSize = (fianl_strsSize < strsSize_c) ? fianl_strsSize : strsSize_c;
        printf("fianl_strsSize=%d , strsSize-count=%d\n", fianl_strsSize, (strsSize-count));

        char* temp2 = (char*)malloc(fianl_strsSize + 1);
        temp2[fianl_strsSize] = '\0';
        for(int i=0; i<strsSize-1; i++){
            for(int k=0; k<fianl_strsSize; k++){
                if(strs[i][k] == strs[i+1][k]){
                    temp[k] = strs[i][k];
                }else{
                    fianl_strsSize = k;
                    if(fianl_strsSize == 0){
                        return "";
                    }
                    goto end;
                }
            }        
        }

        count--;
    }

    /* if fianl_strsSize!=0 , copy data for return value*/
    end:
    char* final = (char*)malloc(fianl_strsSize + 1);
    final[fianl_strsSize] = '\0';
    strncpy(final, temp, fianl_strsSize);
    printf("final = %s\n", final);
    return final;
}