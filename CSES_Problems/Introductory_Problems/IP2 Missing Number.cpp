/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int M[n-1];
    int A[n+1];
    for(int i=0;i<n-1;i++){
        cin>>M[i];
        A[i+1]=-1;
    }
    A[n]=-1;
    for(int i=0;i<n-1;i++){
        A[M[i]]=0;
    }
    for(int i=1;i<n+1;i++){
        if(A[i]==-1){
            cout<<i;
            break;
        }
    }
    

    return 0;
}