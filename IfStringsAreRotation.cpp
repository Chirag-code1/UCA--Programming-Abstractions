#include<iostream>
#include<cstdio>
#include<cmath>
#include <string>
using namespace std;
int main()
{

    string str = "codeQuotient";
    string str2 = "Quotientcode";

    int temp, i, j, flag=0;
    int n = str.length();

    for(i=0 ; i<str.length(); i++){
        temp = str[0];
        for(j=0; j<n-1; j++){
            str[j] = str[j+1];
        }
        str[n-1] = temp;

        cout<<str<<endl;
        if(str.compare(str2) == 0){
            cout<<"Found!"<<endl;
            flag=1;
            break;
        }
    }
    if(flag == 0){
        cout<<"NOT Found!"<<endl;
    }

   return 0;
}
