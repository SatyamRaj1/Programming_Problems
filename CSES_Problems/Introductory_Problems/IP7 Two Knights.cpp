/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   long int unsigned n;
   cin>>n;
   for(long int unsigned i=1;i<=n;i++)
        cout<<(((i*i)*(i*i - 1))-((8*(i-4)*(i-4)) + (40 * (i-4)) +48))/2<<endl;

    return 0;
}
