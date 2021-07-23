#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int remove(int arr[], int n){
    int i, j=0;

    for(i=0;i<n;i++){
        if(arr[i] == arr[i+1]){
            continue;
        }
            arr[j++] = arr[i];
            
    }

    return j;
}
int main()
{
    int n, i;
    cin>>n ;
    int arr[n];

    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int new_n = remove(arr, n);


cout<<"Number of unique elements:\t"<<new_n<<endl;
    for(i=0;i<new_n;i++){
        cout<<arr[i]<<endl;
    }
   return 0;
}
