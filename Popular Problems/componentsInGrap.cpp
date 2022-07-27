vector<int> componentsInGraph(vector<vector<int>> gb) {
    int maxi=2,mini=100000;
    vector<int> visited(2*gb.size(),0);
    //cout<<gb.size();
    for(int i=0;i<gb.size();i++){
        queue<int> Q;
        int n=1;
        if(visited[gb[i][0]-1]==0){
            visited[gb[i][0]-1]=1;
            Q.push(gb[i][0]);
            while(!Q.empty()){
                int x=Q.front()>gb.size()? 1:0;
                for(int j=0;j<gb.size();j++){
                    if(Q.front()==gb[j][x] && visited[gb[j][!x]-1]==0 ){
                        Q.push(gb[j][!x]);
                        n++;
                        visited[gb[j][!x]-1]=1;
                        //cout<<"#2";
                    }
                }
                //cout<<"#1";
                Q.pop();
            }
    }
        if(n>maxi)
                maxi=n;
            if(n>=2 && n<mini)
                mini=n;
        //cout<<n;
}
    vector<int> ans={mini,maxi};
        return ans;
}

