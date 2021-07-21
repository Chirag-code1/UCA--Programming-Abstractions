//BINARY INT TO DECIMAL:

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void btd(int n){
    int ans =0, rem = 0, i=0;
    while(n>0){
        rem = n%10;
        ans += rem* pow(2,i);
        n/=10;
        i++;
    }

    cout<<"Answer:\t"<<ans;
}


int main()
{
    int n= 101101101;

    btd(n);    

   return 0;
}
