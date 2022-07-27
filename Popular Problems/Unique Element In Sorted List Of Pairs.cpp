#include<iostream>
#include<vector>
using namespace std;

int solve(int n, vector<int> nums){
//CODE HERE 
    int s=0,e=n-1;
    int mid=0;
    while(s<=e){
        mid = (s + e)/2;
        if(mid%2==1){
            if(nums[mid]==nums[mid-1])
                s=mid+1;
            else
                e=mid-1;
        }
        else{
            if(mid>s && nums[mid]==nums[mid-1])
                e=mid-1;
            else if(mid<e && nums[mid]==nums[mid+1])
                s=mid+1;
            else
                return nums[mid];
        }
        
    }
    return nums[mid];
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        v.push_back(b);
    }
    cout<<solve(n,v);
}