int power(int base, int exp)
{
  if(exp==0)
    return 1;
  else if(exp<0)
   return(1/power(base,-exp));
  else
    return(base*power(base,exp-1));
}
