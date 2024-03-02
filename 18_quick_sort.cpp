/*

Dekho bhai easy logic hai ..
1. We assume the first element of the array as pivot
2. Then we find the right place to place that pivot - we find the count of numbers smaller than pivot and then find the pivotIndex as st+count
3. We place all smaller numbers to the left of pivot and vice versa by implementing simple basic logic
4. And recursion handles everything else

*/

#include <iostream>
using namespace std;

int partition(int arr[], int st, int end, int pivot){

    int count = 0;

    for(int i=st+1; i<=end; i++){ //st+1 because the st is pivot element
        if(pivot >= arr[i]){
            count ++;
        }
    }

    int pivotIndex = st + count;
    swap(arr[st], arr[pivotIndex]);

    int i = st;
    int j = end;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int arr[], int st, int end){
    
    // Base case
    if(st >= end){
        return;
    }

    // Partition karenge
    int p = partition(arr,st,end,arr[st]);

    // Left part ko sort kro
    quickSort(arr, st, p-1);

    // Right part ko sort kro
    quickSort(arr,p+1,end);

}

int main(){

    int arr[17] = {30,56,45,12,84,62,3,12,45,87,62,655,120,56,23,65,23};
    int n = 17;

    quickSort(arr, 0, n-1);

    cout << '\n';
    for(int i=0; i<n; i++){
        cout << ' ' << arr[i];
    }

    return 0;
}