#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void print(int arr[], int n, int k){
   int left, right, i=0, temp=0;

    for(i=0;i<n;i+=k){
        left = i;
        right = min(i+k-1, n-1);
    while(left<=right){
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] =temp;
        left++;
        right--;
        }
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    int k;
    cin>>k;

    print(arr,n,k);

   return 0;
}
