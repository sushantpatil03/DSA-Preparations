#include <iostream>
using namespace std;

int binarySearch(int arr[],int n ,int key){

    int st = 0;
    int end = n-1;
    // int mid = (st+end)/2;
    int mid = st + (end-st)/2; // To avoid max integer range which can cause by adding 2^31 no for two times before

    while(st <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key < arr[mid]){
            end = mid - 1;
        }else{
            st = mid + 1;
        }

        mid = st + (end-st)/2;
    }
    return -1;
}

int main(){

    int a[5] = {1,2,3,4,5};

    cout << binarySearch(a,5,5);

    return 0;
}