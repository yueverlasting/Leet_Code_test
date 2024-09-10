class Solution {
public:

    /* define set */
    bool isValid(string s) {
        int length = s.size();

        if(length%2 != 0){
            return false;
        }
        int k;
        printf("length = %d \n", length);
        
        char ori_str[length + 1];
        char keep[length + 1];
        int flag=0;

        strcpy(ori_str, s.c_str());
        
        printf("\n\n");

        for(k=0; k<length; k++){
            switch(ori_str[k]){
                case ')':
                    if(flag == 0){
                        return false;    
                    }else{
                        if(keep[flag-1] == '('){
                            flag--;
                            continue;
                        }else{
                            return false; 
                        }
                    }
                break;
                
                case ']':
                    if(flag == 0){
                        return false;    
                    }else{
                        if(keep[flag-1] == '['){
                            flag--;
                            continue;
                        }else{
                            return false; 
                        }
                    }
                break;
                
                case '}':
                    if(flag == 0){
                        return false;    
                    }else{
                        if(keep[flag-1] == '{'){
                            flag--;
                            continue;
                        }else{
                            return false; 
                        }
                    }
                break;
    
                case '(':
                case '[':
                case '{':
                    keep[flag] = ori_str[k];
                    flag++;
                break;
            }

        }

        if(flag != 0){
            return false;
        }

        return true;
    }
};