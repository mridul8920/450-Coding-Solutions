APPROACH TO FOLLOW:
 - Create a max heap.
 - Store the elements in it and heapify the max heap.
 - Extract the max element 'k' times in the vector as ans.
 - You can directly use a priority queue in place of heap as it same as max_heap.

vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    vector<int>v;
	   priority_queue<int>max_heap;
	   
	   for(int i=0;i<n;i++)
	       max_heap.push(arr[i]);
	   
	   for(int i=0;i<k;i++){
	     v.push_back(max_heap.top());
	     max_heap.pop();
	   }
	   
	   return v;
	}
