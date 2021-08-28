#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;


void testfunction(int arr[],int x,char ch,int num, int n){
    int temp;
    if(ch == 'L'  || ch == 'l'){
        while(x>0){
        temp = arr[0];
            for(int i=1;i<=n-1;i++){
                arr[i-1] = arr[i];
            }
        arr[n-1] = temp;
        x--;
        }
        
    } else if ( ch == 'R' || ch == 'r'){
        while(x>0){
        temp = arr[n-1];
            for(int i=n-2;i>=1;i--){
                arr[i+1] = arr[i];
            }
        arr[0] = temp;
        x--;
        }
        
    }

    for(int i=0; i<n;i++){
        if(arr[i] == num){
            cout<<i;
        }
    }


}


int main()
{

    int n, x, num;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;

    char ch;
    cin>>ch;

    cin>>num;
    
    testfunction(arr,x,ch, num, n);
   return 0;
}
