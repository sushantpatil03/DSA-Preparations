#include <iostream>
using namespace std;

bool binarySearch(int arr[], int st, int end, int key){

    if(st>end){
        return false;
    }

    int mid = st + (end-st)/2;
    if(arr[mid] == key){
        return true;
    }else if(arr[mid] < key){
        return binarySearch(arr, mid+1, end, key);
    }else{
        return binarySearch(arr, st, mid-1, key);
    }

}

int main(){

    int arr[10] = {10,20,30,40,50,60,70,80,90,100};

    int key = 71;

    if(binarySearch(arr,0,9,key)){
        cout << "Key found!" << endl;
    }else{
        cout << "Key not found!" << endl;
    }

    return 0;
}