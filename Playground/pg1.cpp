#include <iostream>
using namespace std;

void change(int *arr,int n){

    for(int i=0; i<n; i++){
        arr[i]++;
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    int n = 5;

    cout << '\n';
    for(int i=0; i<n; i++){
        cout << '\t' << arr[i];
    }

    change(arr,n);

    cout << '\n';
    for(int i=0; i<n; i++){
        cout << '\t' << arr[i];
    }

    return 0;
}