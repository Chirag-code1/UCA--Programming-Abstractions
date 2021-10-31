#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{	
  int n;
  cin>>n;
  
  int i, j, k;
    for(i=1;i<=n;i++){ //represents row number.

        //to print reverse. 
        for(j=i;j>=1;j--){
            cout<<j<<"";
        }
        if(i==1){
            cout<<"\n";
        }

        //to print number is forward order from 2, from 2nd row.
        if(i>=2){
            for(k=2;k<=i;k++){
                if(k == i)
               { cout<<k<<endl; }
                else{ cout<<k<<"";}

            }
        }
        
    }
  
  

   return 0;
}
