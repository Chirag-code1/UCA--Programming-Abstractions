#include <iostream>

using namespace std;

void sum(int a, int b){
     int a_rem=0, b_rem=0, c=0, carry=0, sum=0, res=0, mul=1;
     int temp;
  //swapping incase b>a.
     if(b>a){
         temp = a;
         a = b;
         b = temp;
     }
      
    while(a>b){
   
    a_rem= a%10;
    b_rem=b%10;
    sum = a_rem + b_rem + carry;
    carry =0;
    
    if( sum > 9 ){
       
        carry = sum/10;
    }
    
    res = ((sum % 10)*mul)+ res;
    mul= mul*10;
    
    a/=10;
    b/=10;
        } //end of while.
        
        res = carry * mul + res;
        
        cout<<"Result = \t"<<res<<endl;

            }// end of function.


int main()
{
    int a, b;
    cout<<"Enter a and b:\t"<<"    ";
    cin>>a>>b;
    sum(a,b);

    return 0;
}


