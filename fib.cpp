//Printing fibonacci series without third variable.
#include <iostream>

using namespace std;

void fib(int n){
    int a=0, b=1, c;
    
    if(n>=1)
    cout<<a<<endl;
    
    if(n>=2)
    cout<<b<<endl;
    
    for(int i=3;i<=n;i++){
        cout<<a+b<<endl;
        b=a+b;
        a=b-a;
    }
}

int main()
{
    int n;
    cout<<"Enter n:\t"<<"    ";
    cin>>n;
    
    fib(n);

    return 0;
}
