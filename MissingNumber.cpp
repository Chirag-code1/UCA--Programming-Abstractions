//Find Missing Element
// There is an array of non-negative integers. 
//  A second array is formed by shuffling the elements of the first array
//  and deleting a random element. Given these two arrays,
// find which element is missing in the second array.

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void reverse(int a[], int n, int b[], int m){

    int ans1=0, ans2=0, i;
    for(i=0;i<n;i++){
        ans1+=a[i];

        if(i<m)
         ans2+=b[i];
    
    }

    cout<<"Missing Element:\t"<<ans1-ans2<<endl;

}

int main()
{

    int a[] = {1,2,3,4,5};
    int b[] = {3,4,1,2};

    reverse(a,5,b,4);

   return 0;
}



