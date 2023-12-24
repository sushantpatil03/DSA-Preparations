#include <iostream>
using namespace std;

int main(){

    int n = 10;
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

    cout << '\n';
    for(int i=0; i<n; i++){
        // cout << "Hello Noob";
        cout << '\t' << arr[i];
    }

    cout << "\nThe Maximum element is : " << max ;
    cout << "\nThe Minimum element is : " << min ;

    return 0;
}