int isRotation(string str1, string str2){

  if(str1.length()!=str2.length()){
        return 0;
    } 
    else {
            str1 += str1;
            if(str1.find(str2) != string::npos){
                return 1;
            } 
      	else { return 0; }
    }
}
