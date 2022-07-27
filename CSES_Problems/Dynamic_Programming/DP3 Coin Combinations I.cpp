#include<iostream>
using namespace std;
int combinationSum4(int nums[],int n, int target) {
        if(target==0)
            return 0;
        int unsigned arr[target+1];
        arr[0]=0;
        for(int i=1;i<target+1;i++){
            arr[i]=0;
            for(int j=0;j<n;j++){
                if(i-nums[j]==0)
                    arr[i]+=1;
                if(i-nums[j]>0)
                    arr[i]=arr[i]+arr[i-nums[j]];
                arr[i]=arr[i]%1000000007;
            }
        }
        return arr[target];
    }
int main(){
    int n;
    int x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<combinationSum4(arr,n,x);
    return 0;
}