**CPP APPROACH

Approach To Follow:

**- Create two containers (a max heap → s (smaller_half) and a min heap → g (greater_half))
- You have to insert the extra element in the first container i.e s and rest in the other container i.e g
- In easy words you just have to enter the elements in the heap alternatively and just have to take care that the first container should always contain an extra element. (the size of s would always be s≥g)
- If the size of both the containers is same then your median would be calculated by med=(s.top()+g.top())/2.0; 
- Else your median would be med=s.top();**

class Solution
{
    
    public:
    //Function to insert heap.
    priority_queue<double>s;
    priority_queue<double,vector<double>,greater<double>>g;
    void insertHeap(int &x)
    {
        if(s.size() == 0 || s.top()>x){
            s.push(x);
        }
        else{
            g.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
         if(s.size()>g.size()+1){
            g.push(s.top());
            s.pop();
        }
        else if(g.size()>s.size()){
            s.push(g.top());
            g.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
     double med;
     if(g.size()==s.size()){
         med=(s.top()+g.top())/2.0;
     }
     else{
         med=s.top();
     }
     return med;
    }
};
