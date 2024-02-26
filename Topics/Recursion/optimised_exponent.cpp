#include <iostream>
using namespace std;

int findPower(int n, int p){

    // Base case
    if(p == 0){
        return 1;
    }
    if(p == 1){
        return n;
    }

    int smallerProblem = findPower(n, p/2);

    if (p & 1) {
        // x is odd 1,3,5
        return n * smallerProblem * smallerProblem;
    } else {
        // x is even 0,2,4
        return smallerProblem * smallerProblem;
    }
}

int main(){

    int n;
    int p;
    cout << "Enter number and power : ";
    cin >> n;
    cin >> p;

    cout << n << "^" << p << " = " << findPower(n,p);


    return 0;
}