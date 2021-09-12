
//DECIMAL INT TO BINARY:
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void dtb (int n){
 //quotient = n/2;
        int rem=0, ans=0, i=1;
    while(n>0){
        rem = n%2;
        ans = ans + rem*i;
        i*=10;
        n/=2;
    }
    cout<<"Answer:\t"<<ans;
}

int main()
{
    int n = 43;
    dtb(n);
   return 0;
}
