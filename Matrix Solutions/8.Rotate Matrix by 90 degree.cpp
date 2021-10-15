// Rotate matrix by 90 degrees Solution
TC -> O(N*N)
SC -> O(1)
Method-1 (Anticlockwise)
 void rotateby90(vector<vector<int> >& m, int n) 
    { 
        // code here 
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                swap(m[i][j],m[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            int p1=0,p2=n-1;
            while(p2>=p1){
                swap(m[p1][i],m[p2][i]);
                p1++;
                p2--;
                if(p1==p2)
                break;
            }
        }
        
    } 
Method-2 (Clockwise) https://ide.geeksforgeeks.org/U6ROQyM2Hs
    void rotate90Clockwise(int m[N][N])
{
        // code here 
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++){
                swap(m[i][j],m[j][i]);
            }
        }
        for(int i=0;i<N;i++){
            int p1=0,p2=N-1;
            while(p2>=p1){
                swap(m[i][p1],m[i][p2]);
                p1++;
                p2--;
                if(p1==p2)
                break;
            }
    } 
}
