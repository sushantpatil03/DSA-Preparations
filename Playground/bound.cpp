#include <iostream>
using namespace std;

int lastOcc(int arr[], int n, int k){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            s = mid +1;
        }
        else if(k < arr[mid]){
            e = mid -1;
        }else{
            s = mid+1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}

int firstOcc(int arr[], int n, int k){
    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == k){
            ans = mid;
            e = mid -1;
        }
        else if(k < arr[mid]){
            e = mid -1;
        }else{
            s = mid+1;
        }

        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){

    int a[7] = {1,2,3,3,3,3,5};

    cout << lastOcc(a,7,3);

    return 0;
}