#include <iostream>
using namespace std;


void selectionSort(int arr[], int n){
    for(int i=0; i<n-1;i++){
        int min = i;
        for(int j=i+1; j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }

    cout << '\n';
    for(int i=0; i<n; i++){
        cout << '\t' << arr[i];
    }
}

int main(){

    int arr[5] = {6,2,8,4,10};
    int n=5;

    selectionSort(arr,n);

    return 0;
}