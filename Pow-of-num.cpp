#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int b=5, pow=2, ans=1;

    for(int i=1;i<=pow;i++){   
        ans = ans * b;
    }

    cout<<"Ans-"<<ans;
   return 0;
}
