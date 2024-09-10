int lengthOfLastWord(char* s) {

    /* Use strtok */
    char * token = strtok(s, " ");
    int final_length = 0;

    while(token != NULL) {
      /* count length can use strlen() */
      final_length = strlen(token);
      printf( "final_length = %d , %s\n", final_length, token); //printing each token
      token = strtok(NULL, " ");
    }

   return final_length;
}