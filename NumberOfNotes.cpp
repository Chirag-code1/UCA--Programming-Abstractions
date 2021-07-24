#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int notes[9] = {2000, 500, 100, 50, 20, 10, 5, 2, 1}, amount;
    cin>>amount;
    int temp = amount;
    for(int i=0;i<9;i++){
        cout<<temp/notes[i]<<" ";
        temp = temp%notes[i];
    }
   return 0;
}
