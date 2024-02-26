#include <iostream>
using namespace std;

int count(int arr[], int n){
    if(n==0){
        return arr[n];
    }

    int smallerProblem = count(arr+1, n-1);
    int biggerProblem = arr[0] + smallerProblem;

    // cout << biggerProblem << endl;

    return biggerProblem;
}


int main(){

    int arr[5] = {10,20,30,40,50};

    cout << count(arr,4);

    return 0;
}