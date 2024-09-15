bool isAnagram(char* s, char* t) {
    
    int s_len = strlen(s);
    int t_len = strlen(t);
    /* if size is different, direct return false */
    if(s_len != t_len) return false;

    /* Have array to count every char */
    int char_count[26];

    /* Count number from s */
    for(int i=0; i<s_len; i++){
        int index = s[i] - 97; // a in ascii == 97
        char_count[index]++;
    }

    /* Check value in t */
    for(int j=0; j<t_len; j++){
        int index = t[j] - 97; // a in ascii == 97
        char_count[index]--;
        if(char_count[index] < 0) return false;
    }
    return true;
}