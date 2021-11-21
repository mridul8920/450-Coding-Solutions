vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       stack<int>s;
       vector<int>v;
       s.push(0);
       v.push_back(1);
       for(int i=1;i<n;i++){
           while(s.empty()==false and arr[s.top()]<=arr[i])
            s.pop();
        int span=s.empty()?i+1:(i-s.top());
        v.push_back(span);
        s.push(i);
       }
       return v;
    }
