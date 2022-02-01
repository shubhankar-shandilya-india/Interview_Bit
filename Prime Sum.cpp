vector<int> Solution::primesum(int A) {
    bool vis[A+1];
    memset(vis,false,sizeof(vis));
    for(int i=2;i*i<=A;i++){
        if(!vis[i]){
            for(int j=2;i*j<A;j++){
                vis[i*j]=true;
            }
        }
    }
    vector<int>res;
    
    for(int i=2;i<=A/2;i++){
        if(!vis[A-i]&&!vis[i]){
            res.push_back(i);
            res.push_back(A-i);
            break;
        }
    }
    return res;
}