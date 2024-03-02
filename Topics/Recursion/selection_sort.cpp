#include <iostream>
using namespace std;

void selectionSort(int *arr, int i, int n){
    if(i >= n){
        return;
    }

    int min = i;
    for(int j=i+1; j<n;j++){
        if(arr[j] < arr[min]){
            min = j;
        }
    }
    swap(arr[i], arr[min]);

    return selectionSort(arr, i+1, n);
}

int main(){

    int arr[10] = {30, 35, 56,58,89,42,32,3,65,37};

    selectionSort(arr, 0, 10);

    cout << '\n';
    for(int i=0; i<10; i++){
        cout << '\t' << arr[i];
    }

    return 0;
}