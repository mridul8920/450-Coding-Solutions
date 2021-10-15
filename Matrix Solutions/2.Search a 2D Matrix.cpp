   bool searchMatrix(vector<vector<int>>& mat, int x) {
        int r=mat.size(),c=mat[0].size();
            if(x<mat[0][0])
            return false;
        if(x>mat[r-1][c-1])
            return false;
        int i=0,j=c-1;
       while(i<r and j>=0){
           if(mat[i][j]==x)
               return true;
           else if(x<mat[i][j])
               j--;
           else
               i++;
       }
        return false;
    }
