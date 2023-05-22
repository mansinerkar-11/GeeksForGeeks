//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
    }

    public:
    void downHeapify(int arr[],int ind,int n){
        int left = 2*ind+1; 
        int right = 2*ind+2; 
        int smallest = ind;
        if(left<n&&arr[left]<arr[smallest]){
            smallest = left;
        }
        if(right<n&&arr[right]<arr[smallest]){
            smallest = right;
        }
        if(smallest!=ind){
            swap(arr[smallest],arr[ind]);
            downHeapify(arr,smallest,n);
        }
        return;
    }
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here using down heapify
    for(int i=n/2-1;i>=0;i--){
        downHeapify(arr,i,n);
    }
    return;
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here we made a min heap
        buildHeap(arr,n);
        int len=n;
        for(int i=0;i<n;i++){
            swap(arr[0],arr[len-1]);
            len--;
            downHeapify(arr,0,len);
            
            // cout<<arr[i]<<" ";
        }
        reverse(arr,arr+n);
        return;
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends