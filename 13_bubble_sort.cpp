#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    cout << '\n';
    for(int i=0; i<n; i++){
        cout << '\t' << arr[i];
    }
}

int main(){

    int arr[5] = {20,30,10,50,60};
    int n = 5;

    bubbleSort(arr,n);


    return 0;
}