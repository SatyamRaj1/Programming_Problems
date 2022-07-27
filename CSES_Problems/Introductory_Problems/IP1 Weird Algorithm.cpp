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
    int long unsigned n;
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n%2==0)
            n/=2;
        else
            n=n*3 +1;
    }
    cout<<n;

    return 0;
}
