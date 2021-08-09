#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int t,l,i,j,n;
 cin>>t;
  for(l=0;l<t;l++){
    cin>>n;
    int a[n][n];
    int b[n][n];
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        cin>>a[i][j];
      }
    }
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        b[j][n-i-1]=a[i][j];
      }
    }
  
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          if(j == n-1){
              cout<<b[i][j]<<endl;
          }else {cout<<b[i][j]<<" ";}
      	}
 	 }
    cout<<"\n";
  }
  
  
   return 0;
}
