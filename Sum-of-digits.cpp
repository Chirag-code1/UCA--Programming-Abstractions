#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int main()
{
    int a, c=0, sum=0;
    int n;
    //cout<<"Enter n:\t";
    cin>>n;
    while(n>0){
        // cout<<"Enter a:\t";
        cin>>a;
        sum=0;
        while(a>0){
        c = a%10;
        sum  = sum+ c;
        a/=10;
        }
        cout<<sum<<endl;
        n--;
    }
    return 0;
}
