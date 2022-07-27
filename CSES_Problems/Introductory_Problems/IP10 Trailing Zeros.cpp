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
    long unsigned int n;
    cin>>n;
    long unsigned int a = 5;
    int res=0;
    while(n/a!=0){
        res = res + n/a;
        a=a*5;
    }
    cout<<res;
    return 0;
}