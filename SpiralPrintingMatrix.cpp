#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int R, C, i, j;
    cin>> R >> C;

   

    int a[R][C];

    for( i=0;i<R;i++){
        for(j=0; j<C; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Entered Array:";

    for( i=0;i<R;i++){
        cout<<endl;
        for(j=0; j<C; j++){
            cout << a[i][j]<<"  ";
        }
    }

    cout<<endl<<endl;

    
        int r=0,  c=0 ;

        if(1<=R<=50 and 1<=C<=50){ //constraint

          while(r<R && c< C){

            for(i=c;i<C;i++){
                cout<<a[r][i]<<endl;
            }
            
            r++;

            for(j=r; j<R; j++){
                cout<<a[j][C-1]<<endl;
            }
            C--;

            if(r<R){
                for(i = C-1; i>=c ; i--){
                    cout<<a[R-1][i]<<endl;
                }
                R--;
            }

            if(c<C){
                for(i= R-1; i>=r; i--){
                    cout<<a[i][c]<<endl;
                }
            }
            c++;
         
          }  
        }


   return 0;
}
