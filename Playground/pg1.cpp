#include <iostream>
using namespace std;

long long int binarySearchint(int n){
    int st = 0;
    int end = n;
    long long int mid = st+(end-st)/2;
    long long int res = 0;
    while(st<=end){
        long long int temp = mid*mid;
        if(temp == n){
            return mid;
        }else if(temp > n){
            end = mid - 1;
        }else{
            res = mid;
            st = mid +1;
        }
        mid = st + (end-st)/2;
    }
    return res;
}

float square(float n){
    return n*n;
}

float findPrecision(float x,float n){
    float res = 0;
    float st = 0.1;
    float end = 0.99;
    float mid = st + (end-st)/2;
    while(st<=end){
        float temp = square(x+mid); 
        if(temp == n){
            return x+mid;
        }else if(){

        }else{

        }
        mid = st + (end-st)/2;
    }
}

int main(){
    
    flaot n;
    cout << "\nEnter a number : ";
    cin >> n;

    flaot x = binarySearchint(n);

    float res = findPrecision(float(x),float(n));

    return 0;
}