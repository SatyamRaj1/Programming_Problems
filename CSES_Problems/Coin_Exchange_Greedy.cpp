#include <bits/stdc++>
using namespace std;
int min(int a,int b){
    if(a<b)
        return a;
    return b;
}
int Greedy_Coin(int curr, int end,int Sum, int Arr[end]){
    if(Sum==0)
        return 0;
    if(Sum<0 || curr > end)
        return INT_MAX;
    int Co = Greedy_Coin(curr,end,Sum - Arr[curr],Arr);
    int C = Greedy_Coin(curr + 1,end,Sum,Arr);
    return min(Co,C) + 1;
    
}

int main()
{
    int n;
    cin>>n;
    int S;
    cin>>S;
    int C[n];
    for(int i=0;i<n;i++)
        cin>>C[i];
    int Co = Greedy_Coin(0,n,S,C)
    if (Co == INT_MAX)
        cout<<"Not Possible";
    else
        cout<<Co;
    
    return 0;
}
