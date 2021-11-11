class Solution{
    public:
    /* METHOD-1 (BY DIRECTLY USING PRIORITY QUEUE)
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        pq.push(a[i]);
         for(int i=0;i<m;i++)
        pq.push(b[i]);
        vector<int>v;
        for(int i=0;i<(m+n);i++){
            v.push_back(pq.top());
            pq.pop();
        }
        return v;
    }*/
    
    //METHOD-2 (SIMPLY WRITE THE HEAPIFY AND BUILD HEAPIFY FOR MAX HEAP AFTER COMBINING BOTH THE HEAPS INTO ONE ARRAY)
    void heapify(vector<int> &arr,int i,int n){
      int largest=i;
       int l= 2*i+1;
       int r=2*i+2;
      
       if(l<n && arr[l]>arr[largest]) largest=l;
       
       if(r<n && arr[r]>arr[largest]) largest=r;
       
       if(largest!=i){
           swap(arr[i],arr[largest]);
           heapify(arr,largest,n);
       }
       
       
       
   }
   vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
       vector<int> merged;
       for(int i=0;i<n;i++) 
       merged.push_back(a[i]);
       
       for(int i=0;i<m;i++) 
       merged.push_back(b[i]);
       int x=m+n;
       for(int i=(x/2)-1;i>=0;i--){
           heapify(merged,i,x);
       }
       return merged;
   }
};
