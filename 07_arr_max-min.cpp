#include <iostream>
using namespace std;

int main(){

    int n = 15;
    int arr[n] = {0};

    cout << "Enter values to the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max,min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "\nThe Maximum element is : " << max ;
    cout << "\nThe Minimum element is : " << min ;

    return 0;
}