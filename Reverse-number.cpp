#include <iostream>
#include<cmath>
using namespace std;

void rev(int n)
{
    
    int res=0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n = n / 10;
    }
    cout<<res;
}



int main() {
   int n;
   cin>>n;
   if(0<=n<=99999){
       rev(n);
   }

    return 0;
}
