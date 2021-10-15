int median(vector<vector<int>> &mat, int r, int c){
        // code here          
        int min=mat[0][0];
        int max=mat[0][c-1];
        for(int i=0;i<r;i++){
            if(mat[i][0]<min)    min=mat[i][0];
            if(mat[i][c-1]>max)  max=mat[i][c-1];
        }
        int medpos=(r*c+1)/2;
        while(min<max){
            int mid = (min+max)/2;
            int midpos=0;
            for(int i=0;i<r;i++)
            midpos+=upper_bound(mat[i].begin(),mat[i].begin()+c,mid)-mat[i].begin();
            if(midpos<medpos)
                min=mid+1;
            else 
                max=mid;
        }
        return min;
    }
