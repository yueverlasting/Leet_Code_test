int romanToInt(char* s) {
    int final_num=0;
    size_t length = strlen(s);
    //printf("length = %ld \n", length);
    
    for(int i = 0; i < length; i ++){
        char seprate_c = s[i];
        switch(seprate_c){
            case 'I':
                if(i+1<length){
                    if(s[i+1] == 'V'){
                        final_num +=4;
                        i++;
                    }else if(s[i+1] == 'X'){
                        final_num +=9;
                        i++;
                    }else{
                        final_num +=1;
                    }
                }else{
                    final_num +=1;
                }
            break;
            case 'V':
                final_num +=5;
            break;
            case 'X':
                if(i+1<length){
                    if(s[i+1] == 'L'){
                        final_num +=40;
                        i++;
                    }else if(s[i+1] == 'C'){
                        final_num +=90;
                        i++;
                    }else{
                        final_num +=10;
                    }
                }else{
                    final_num +=10;
                }
            break;
            case 'L':
                final_num +=50;
            break;
            case 'C':
                if(i+1<length){
                    if(s[i+1] == 'D'){
                        final_num +=400;
                        i++;
                    }else if(s[i+1] == 'M'){
                        final_num +=900;
                        i++;
                    }else{
                        final_num +=100;
                    }
                }else{
                    final_num +=100;
                }
            break;
            case 'D':
                final_num +=500;
            break;
            case 'M':
                final_num +=1000;
            break;
            default:
                final_num +=0;
            break;
        }
    }

    if(final_num == 0 || final_num > 3999){
        return 0;
    }
    return final_num;
}