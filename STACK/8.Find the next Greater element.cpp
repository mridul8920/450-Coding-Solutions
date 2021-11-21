vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long>s;
        vector<long long>v;
        s.push(arr[n-1]);
        v.push_back(-1);
        for(int i=n-2;i>=0;i--){
            while(s.empty()==false and s.top()<=arr[i])
                s.pop();
            long long NextGr=s.empty()?-1:s.top();
            v.push_back(NextGr);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
