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
    long unsigned int mod=1000*1000*1000 + 7;
    long unsigned int res=1;
    for(int i=0;i<n;i++){
        res=res*2;
        res=res%mod;
    }
    cout<<res;
    return 0;
}