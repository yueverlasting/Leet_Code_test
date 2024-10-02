bool isPalindrome(char* s) {
    int size_of_s = strlen(s);
    if(size_of_s < 1) return true;

    printf("jade check size_of_s=%d\n", size_of_s);
    char* final = (char*)malloc(size_of_s + 1);
    final[size_of_s] = '\0';
    int index=0;

    for(int i=0; i<size_of_s; i++){  
        if(s[i]-'A' == 0 || (s[i]-'A' > 0 && s[i]-'A' < 26)){ /* A-Z = 65-90 */
            final[index] = s[i]-'A'+'a'; /* trans upper case to lower case */
            index++;
        }else if(s[i]-'a' == 0 || (s[i]-'a' > 0 && s[i]-'a' < 26)){ /* a-z = 97-122 */
            final[index] = s[i];
            index++;
        }else if(s[i]-'0' == 0 || (s[i]-'0' > 0 && s[i]-'0' < 10)){ /* 0-9 */
            final[index] = s[i];
            index++;
        }
    }
    final[index] = '\0';
    size_of_s = strlen(final);

    /* check Palindrome */
    int count = size_of_s/2;
    for(int j=0; j<count; j++){
        if(final[j]!=final[size_of_s-j-1]) return false;
    }

    return true;
}