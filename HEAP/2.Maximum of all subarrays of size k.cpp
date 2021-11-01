class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    //----------METHOD-1(NAIVE APPROACH)----------
    /*
             vector <int> max_of_subarrays(int *arr, int n, int k)
            {
                // your code here
                vector<int>v;
                for(int i=0;i<=n-k;i++){
                    int a=arr[i];
                    for(int j=1;j<k;j++){
                         if(arr[i+j]>a)
                        a=arr[i+j];
                    }
                     v.push_back(a);
                }
                return v;
            }
    */
    //----------METHOD-2(USING MAX HEAP)----------
    /*
             vector <int> max_of_subarrays(int *arr, int n, int k)
            {
                // your code here
                priority_queue<int>max_heap;
                vector<int>v;
                for(int i=0;i<=n-k;i++){
                    for(int j=1;j<k;j++){
                        max_heap.push(arr[i+j]);
                    }
                    v.push_back(max_heap.top());
                }
              return v;
            }
    */
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        multiset<int>s;
        vector<int>v;
        int i=0,j=0;
        while(j<k){
            s.insert(arr[j]);
            j++;
        }
        v.push_back(*s.rbegin());
        while(j<n) {
            s.erase(s.find(arr[i]));
            s.insert(arr[j]);
            v.push_back(*s.rbegin());
            j++;
            i++;
        }
      return v;
    }
};
