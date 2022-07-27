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
    int A[n];
    long int unsigned count = 0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(i!=0 && A[i]<A[i-1]){
            count+=A[i-1] - A[i];
            A[i]= A[i-1];
        }
    }
    cout<<count;

    return 0;
}