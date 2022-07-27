#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int k=n/2;
    int arr[n][n];
    arr[0][0]=0;
    for(int i=1;i<n;i++)
        arr[i][0]=1;
    for(int j=1;j<n;j++)
        arr[0][j]=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(i>=k-m && i<=k+m && j>=k-m && j<=k+m){
                arr[i][j]=0;
            }
            else{
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
    }
    cout<<arr[n-1][n-1];
    return 0;
}