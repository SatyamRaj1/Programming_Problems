int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    int sum=0;
    int n=0;
    int i=0;
    int j=0;
    for(;i<a.size();i++){
        if(sum>maxSum){
            break;
        } 
        sum=sum+a[i];
    }
    if(sum>maxSum)
        n=i-1;
    else
        n=i;
    
    for(;j<b.size();j++){
        while((sum>maxSum)&&(i>0))
            sum-=a[--i];
        sum+=b[j];
        if(sum<=maxSum && n<i+j+1)
            n=i+j+1;
    }
    return n;
}

