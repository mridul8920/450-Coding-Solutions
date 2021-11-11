 /*
    METHOD-1 (USING SORTING) 
        TC-> O(N*K*Log(N*K)
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int>v;
        for(int i=0;i<K;i++){
            for(int j=0;j<K;j++)
            {
                v.push_back(arr[i][j]);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
    
    */
    
    /*
    METHOD-2 (EFFICIENT SOLUTION)
     TC-> O(N*K*LogK)
    */
    typedef pair<int,pair<int,int>>triplet;
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<triplet,vector<triplet>,greater<triplet>>pq;
        for(int i=0;i<K;i++){
            pq.push({arr[i][0],{i,0}});
        }
        vector<int>res;
        while(!pq.empty()){
            triplet curr=pq.top();
            pq.pop();
            res.push_back(curr.first);
            int ap=curr.second.first;
            int vp=curr.second.second;
            if(vp+1<K){
                pq.push({arr[ap][vp+1],{ap,vp+1}});
            }
        }
        return res;
    }
