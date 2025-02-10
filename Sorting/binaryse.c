#include<stdio.h>
// binary search iterative method
int binarySearch(int arr[], int x, int low, int high){
    // low = 0, high = n-1;
    int mid;
    while(low<=high){
        mid = (low + high) / 2;
        if(x==arr[mid])
            return mid;
        if(x > arr[mid])
            low = mid+1;
        else    
            high = mid -1;
    }
    return -1;
}
// binary search recursive method
int bsr(int arr[], int x, int low, int high){
    if (low <= high)
    {
        int mid = (low + high )/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid] > x)
            return bsr(arr, x, low, mid-1);
        else    
            return bsr(arr, x, mid+1, high);
    }
    return -1;
}
// main metod
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    // int bs = binarySearch(arr, 6, 2, 0, 6-1);
    int bssr = bsr(arr, 1, 0, 6-1);
    if(bssr == -1)
        printf("Not found\n");
    else 
        printf("Element found\n");
    return 0 ;
}