#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n){

    // Base case
    if(n == 0 || n == 1){
        return;
    }

    // Solving one case ... bakika recursion dekh lega
    for(int i=0; i<n-1; i++){
        if(arr[i] >= arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    // Recursive call by shrinking the array everytime
    bubbleSort(arr, n-1);
}

int main(){

    
    int arr[10] = {30, 35, 56,58,89,42,32,3,65,37};

    bubbleSort(arr,10);

    cout << '\n';
    for(int i=0; i<10; i++){
        cout << '\t' << arr[i];
    }


    return 0;
}