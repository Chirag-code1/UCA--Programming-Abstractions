

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    
    int arr[] = {12, 27, 14, 11, 25, 6, 7}; int n=7;
    int ans[7], i;

       int max =0;

       for(i=n; i>=0 ; i--){
           if(arr[i]>max)
           {
               max =arr[i];
               ans[i] = max;
           }
       }

       for(i=1; i<=n;i++){
           if(ans[i]!= 0){
               cout<<ans[i]<<" ";
           }
       }


   return 0;
}
