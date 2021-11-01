class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      int l=2*i+1,r=2*i+2,largest=i;
      if(l<n and arr[l]>arr[i])
        largest=l;
        else largest=i;
      if(r<n and arr[r]>arr[largest])
        largest=r;
      if(i!=largest){
          swap(arr[i],arr[largest]);
          heapify(arr,n,largest);
      }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr,n);
        for(int i=n-1;i>0;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }
};
