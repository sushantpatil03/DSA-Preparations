#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n){
    int end = 1;
    while(end<=n-1){
        swap(arr[end-1],arr[end]);
        end = end + 2;
    }
}

int main(){

    int n = 5;
    int arr[1000] = {0};

    cout << "Enter values to the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    swapAlternate(arr,n);

    cout << '\n';
    for(int i=0; i<n; i++){
        cout << ' ' << arr[i];
    }
    
    return 0;
}