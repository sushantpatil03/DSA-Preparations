#include <iostream>
using namespace std;

int findNum(int *arr, int n, int key){
    if(n < 1)
        return -1;

    if(arr[0] == key)
        return n;
    if(arr[1] == key)
        return n+1;

    return findNum(arr+2,n-2,key);
}

int main(){

    int arr[9] = {3,4,1,2,6,8,99,46,5};   
    int n=9;

    cout << "Element found at : "<< n-findNum(arr,n,3) << endl;
    cout << "Element found at : "<< n-findNum(arr,n,4) << endl;
    cout << "Element found at : "<< n-findNum(arr,n,1) << endl;
    cout << "Element found at : "<< n-findNum(arr,n,2) << endl;
    cout << "Element found at : "<< n-findNum(arr,n,6) << endl;
    cout << "Element found at : "<< n-findNum(arr,n,8) << endl;
    cout << "Element found at : "<< n-findNum(arr,n,99) << endl;
    cout << "Element found at : "<< n-findNum(arr,n,46) << endl;
    cout << "Element found at : "<< n-findNum(arr,n,5) << endl;


    return 0;
}