#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start = start + 1;
        end = end - 1;
    }
}

int main(){

    
    int n = 5;
    int arr[1000] = {0};

    cout << "Enter values to the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    reverseArray(arr,n);

    cout << '\n';
    for(int i=0; i<n; i++){
        cout << ' ' << arr[i];
    }
    
    return 0;
}