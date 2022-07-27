#include <iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    unsigned int DP[n];
    DP[0]=1;
    for(int i=1; i<n; i++){
        if(i<6){
            DP[i] = DP[i-1]*2;
        }
        else{
            DP[i]=0;
            for(int j=1; j<7; j++){
                DP[i] = (DP[i] + DP[i-j])%(1000000007);
            }
            
        }
    }
    cout<<DP[n-1];
    return 0;
}