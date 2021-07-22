
//This code works for even the negative elements in an Array.

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max && arr[i]>=0){
            max = arr[i];
        }

        else if(arr[i]>max && arr[i]<0){
              max = arr[i];
             //cout<<arr[i]<<endl;
        }
    }

    cout<<"Maximum element:\t"<<max;

   return 0;
}
