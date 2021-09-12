






#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

void greaterElement(int arr[], int n){
    for(int i=1;i<=n;i++){
        if(arr[i]<=arr[i+1] && i!=n){
            arr[i] = arr[i+1];
           // cout<<arr[i+1]<<"   ";
        }
        else if(arr[i] == arr[n] && i==n)
           { arr[i] = -1; }
            //cout<<"-1"<<endl; 
        else{
            arr[i] = -1;
        }
        
    }
    return arr;

    cout<<"Final Array:\t"<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    greaterElement(arr,n);
   return 0;
}
