/******************************************************************************

M2 
first print all even numbers then all odd numbers

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<2){
        cout<<n;
    }
    else if(n<4){
        cout<<"NO SOLUTION";
    }
    else{
        int a=n/2 + 1;
        int b=n/2;
        for(int i=a;i<=n;i++){
            cout<<i<<" ";
            if((i-b)!=a)
                cout<<i-b<<" ";
        }
    }
    return 0;
}