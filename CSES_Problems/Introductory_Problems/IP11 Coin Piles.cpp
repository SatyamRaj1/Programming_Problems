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
    int t;
    cin>>t;
    for(int _=0;_<t;_++){
        int a,b;
        cin>>a>>b;
        if(((a+b)%3==0)&&(a<=2*b) && (b<=2*a))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }

    return 0;
}