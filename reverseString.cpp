string reverseString(CQStack *stack,string s){
    for(int i=0; i<s.length(); i++){
      stack->push(s[i]);
    }
  s = "";
  	while(!stack->isEmpty()){
      s+=stack->pop();
    }
  return s;
}
