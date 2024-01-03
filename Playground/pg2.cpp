#include <iostream>
using namespace std;

int findMax(int arr[], int n){

    for(int i=0; i<n; i++){
        int leftSum = 0;
        int rightSum = 0;

        int j = 0;
        for(j; j<=i; j++){
            leftSum += arr[j];
        }
    }

    return 1;

}

int main(){

    int arr[4] = {10,20,30,40};

    cout << '\n';
    for(int i=0; i<4; i++){
        cout << '\t' << arr[i];
    }

    int res = findMax(arr,4);

    return 0;
}