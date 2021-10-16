Approach to follow:
-> To solve in O(N + M) start from the top right corner of the matrix and keep track of the index of the row which has maximum 1s. 
-> Go left if you encounter 1
-> Go down if you encounter 0
-> Stop when you reach the last row or first column.
  
  Code:
int rowWithMax1s(vector<vector<int> > mat, int n, int m) {
	    // code here
	    int arr[n];
	    int i=0,j=m-1,count=0,ms=INT_MIN,ans=-1;
	    while(i<n and j>=0){
	        if(mat[i][j]==1){
	            count++;
	            j--;
	           ms=max(ms,count);
	           ans=i;
	        }
	        if(mat[i][j]==0){
	        count=0;     
	        i++;
	        }
	   }

	    return ans;
	}
