#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++)
        cin>>Arr[i];
    sort(Arr,Arr+n);
    int x=2;
    int d=Arr[0];
    Arr[0]=-1;
    int t=0;
    while(t<n){
        if(Arr[t]==-1){
            t++;
            continue;
        }
        int p=Arr[t]/x;
        if(p*x==Arr[t]){
            Arr[t]=-1;
            d+=p;
            t++;
        }
        else{
            p++;
            int i=t;
             while(i<n && Arr[i]<=p*x){
                i++;
             }
             d+=p;
             Arr[i-1]=-1;   
        }
    x++;
    }
    cout<<d;
    return 0;
}