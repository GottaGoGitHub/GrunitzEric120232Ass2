
//C++ program for implementation of Heap Sort 
#include <iostream> 
  
using namespace std; 
  
 
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; //Initialize largest as root 
    int left = 2*i + 1; 
    int right = 2*i + 2;  
  
    //If left child is larger than root 
    if (left < n && arr[left] > arr[largest]) 
        largest = left; 
  
    //If right child is larger than largest so far 
    if (right < n && arr[right] > arr[largest]) 
        largest = right; 
  
    //If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        //Recursively heapify remaining tree
        heapify(arr, n, largest); 
    } 
} 
  
//main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
    //Build heap 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    //Take Element from heap 
    for (int i=n-1; i>=0; i--) 
    { 
        //Move current root to end 
        swap(arr[0], arr[i]); 
  
        //do heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 
  
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; ++i) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 
  
//main function
int main() 
{ 
    int arr[] = {-3, 1, 6, 2, 6, 1, 5, -3, 65, 1, -7}; 
    int arr2[] = {0, 0, 0, 0};
    int n1 = sizeof(arr)/sizeof(arr[0]); 
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
  
    heapSort(arr, n1);
    heapSort(arr2, n2);
  
    cout << "Sorted array is \n"; 
    printArray(arr, n1); 

    cout << "Second Array: \n";
    printArray(arr2, n2);
} 
