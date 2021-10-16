int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  int min=mat[0][0],max=mat[n-1][n-1];
  while(min<max){
      int mid=(min+max)/2,midpos=0;
      for(int i=0;i<n;i++)
      midpos+=upper_bound(mat[i],mat[i]+n,mid)-mat[i];
      if(midpos<k)
      min=mid+1;
      else 
      max=mid;
  }
  return min;
}
