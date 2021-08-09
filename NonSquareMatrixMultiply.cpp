#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed
using namespace std;
int main()
{
    // Write your code here
  int i, j;
    int TestCase;
    cin>>TestCase;
while(TestCase>0){
    int row1, col1;
    cin>> row1 >> col1;
    int a[row1][col1];
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            cin>> a[i][j];
        }
    }
    int row2, col2;
    cin>> row2 >> col2;
    int b[row2][col2];
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            cin>> b[i][j];
        }
    }
    if(col1 != row2){
        cout<<"Multiply Not-Possible!";
    }
    else {
        int k;
        int c[row1][col2];
        for(i=0;i<row1;i++){
            for(j=0;j<col2;j++){
                c[i][j] = 0;
                for(k=0;k<row2;k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
      //  cout<<"After Printing =>"<<endl;
        for(i=0;i<row1;i++){
            cout<<endl;
            for(j=0;j<col2;j++){
                cout<<c[i][j];
                cout<<" ";
            }
        }
} // end of else.
  TestCase--;
}
    // Return 0 to indicate normal termination
    return 0;
}
