#include <stdio.h>
void prime(int);
int main()
{
   int no;
   scanf("%d",&no);
   prime(no);
   return 0;
}
void prime(int n)
{
  int i;
  for(i=2;i<=n;i++)
  {
    if(n%i==0)
    {
      printf("%d\n",i);
      prime(n/i);
      break;
    
    }
  }
}
