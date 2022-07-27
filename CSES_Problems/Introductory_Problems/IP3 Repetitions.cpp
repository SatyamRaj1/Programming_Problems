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
    string n;
    cin>>n;
    int max = 1;
    int curr = 1;
    for(int i=1;i<n.length();i++){
        if(n[i]!=n[i-1])
            curr = 0;
        curr +=1;
        if(curr>max){
            max=curr;
        }
    }
    cout<<max;

    return 0;
}