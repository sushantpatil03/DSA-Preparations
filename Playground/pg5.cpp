#include <iostream>
using namespace std;

bool isSorted(int *arr, int n){
    if(n==0 || n==1)
        return true;
  
    if(arr[0] > arr[1])
        return false;

    return isSorted(arr+1, n-1);
}

int main(){

    int arr[5] = {2,30,40,38,225};  
    int n = 5;

    if(isSorted(arr, n)){
        cout << "Array is sorted" << endl;
    }else{
        cout << "Array isn't sorted" << endl;
    }

    return 0;
}