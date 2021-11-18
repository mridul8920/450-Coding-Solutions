Approach to follow:

- Pick two smallest ropes and join them i.e. , cost+=A+B;
- Add new rope in the min heap
- Repeat the steps until only 1 element is left in the min heap

code: 
long long minCost(long long arr[], long long n) {

        long long cost=0;
        
        priority_queue<long long,vector<long long>,greater<long long>>pq(arr,arr+n);

        while(pq.size()>1){
            long long a=pq.top(); 
            pq.pop();
            
            long long b=pq.top(); 
            pq.pop();
            
            long long new_rope=(a+b);
            cost+=new_rope;
            pq.push(new_rope);
        }
        
        return cost;
    }
