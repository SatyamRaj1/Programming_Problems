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
    long int unsigned n;
    cin>>n;
    if (n%4 == 1 || n%4 == 2)
        cout<<"NO";
    else{
        cout<<"YES"<<endl;
        int c=n/2 + n%2;
        int A[c];
        int B[n/2];
        int i=1;
        int k=0,l=0;
        if(n%2!=0)
            A[k++]=i++;
        for(i;i<n;i++){
            A[k++]=i++;
            B[l++]=i++;
            B[l++]=i++;
            A[k++]=i;
        }
        cout<<c<<endl;
        for(int i=0;i<c;i++)
            cout<<A[i]<<" ";
        cout<<endl<<n/2<<endl;
        for(int i=0;i<n/2;i++)
            cout<<B[i]<<" ";
    }
        
    

    return 0;
}