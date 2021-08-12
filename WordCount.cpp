int countWords(char str[]) {
    int n=0;
    while(str[n] != '\0'){
        n++;
    }

    int isWord=0, isSpace=0, i;

    for(i=0; i <n; i++){
        if( str[i] == ' '){
            isSpace=0;
        }
        else {
            if(isSpace ==0){
                isWord++;
                isSpace++;
            } 
            }// end of else.
    }//end of for loop

        return isWord;
}
