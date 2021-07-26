#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void pattern(int n){
    int i, j=0, ans=0;

    for(i=1;i<=n;i++){
        while(j!=i){
            if(j == i-1)
                cout<<++ans<<endl;
            else{
            cout<<++ans<<" ";
            }
            j++;
        }
        j=0;
    }

}
int main()
{
    int n;
    cin>>n;
    pattern(n);
   return 0;
}
