Expected Time Complexity: O(r*c)
Expected Auxiliary Space: O(r*c), for returning the answer only.
Approach to follow:
-> We need to go boundary by boundary. First row, last column, last row, first column and then we enter inside by 1 and then repeat the process.
-> We can do this easily by taking 4 pointers top,down,right and left also a direction ptr to know the correct direction.
-> Assign down and left value = N-1.
-> Change the direction "dir=(dir+1)%total_sides" according to this.


vector<int> spirallyTraverse(vector<vector<int> > a, int n, int m) 
    {
     int t,b,l,r;
       t=0;
       b=n-1;
       l=0;
       r=m-1;
       int dir=0;
       int constexpr total_sides = 4;
       vector<int>ans;
       while(t<=b && l<=r){
         if(dir==0){
             for(int i=l;i<=r;i++)
             ans.push_back(a[t][i]);
             t++;
         }  
           else if(dir==1){
               for(int i=t;i<=b;i++)
                ans.push_back(a[i][r]);
                r--;
               
           }
           else if(dir==2){
               for(int i=r;i>=l;i--)
               ans.push_back(a[b][i]);
               b--;
           }
           else if(dir==3)
           {
               for(int i=b;i>=t;i--)
               ans.push_back(a[i][l]);
               l++;
           }
           dir=(dir+1)%total_sides;
       }
       return ans;
    }
