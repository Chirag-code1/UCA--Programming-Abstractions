//John likes to play with numbers. He is playing a game where he writes numbers starting 1 till N in 
//multiple rows. Initially he chooses a number W and he writes W numbers in each row except probably in
//the last row when he is done writing till number N. Given N and W and any row or column in this arrangement, 
//print the sum of all the numbers in this row or column.


//Input Format:

//First line of input will contain a number T = number of test cases. For each test case, the first line will
//contain two numbers N and W. Another line will contain a number X and letter 'R' or 'C' separated by 
//space. If letter is 'R', print the sum of numbers in //row number X , else if letter is 'C', print the sum of
//numbers in column number X. Rows and columns //are numbered in 1-based index ( as 1,2,3,..)




#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int TestCase = 0;
    cin>>TestCase;

    while(TestCase>0){

        int N, W;
        cin>>N>>W;
        int  i , j, ii=1;
        int row = N/W;
        row+=1;
        int a[row+1][W];

       
            for(j=1;j<=row;j++){
            for(i=1;i<=W;i++){
                if(ii<=N){
                a[j][i] = ii;
                // cout<<a[i][W]<<endl;
                ii++;
                }
                else{
                    a[j][i] = 0;
                }
            }
            }
            
        

        // cout<<a[1][1]<<endl;
        // PRINTING
        cout<<endl<<endl;
        cout<<"For matrix:\t";
        for(i=1;i<=row;i++){
            cout<<endl;
            for(j=1;j<=W;j++){
                cout<<a[i][j]<<"    ";
            }
        }
        cout<<endl;


        int X, sum=0;
        char Z;
        cin >> X >> Z;

        if(Z == 'R'){
            
                    for(j=1;j<=W;j++){
                    sum =  sum + a[X][j];
                     }
            

        } else if(Z == 'C'){

                    for(j=1;j<=row;j++){
                    sum = sum + a[j][X];
                    }

        }

        // cout<<sum<<endl;

        cout<<"Answer-:\t"<<sum<<endl;




        TestCase--;
    }
   return 0;
}
