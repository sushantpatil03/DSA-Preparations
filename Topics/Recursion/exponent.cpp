#include <iostream>
using namespace std;


// This is the simplest way - (optimised function is also present below with simple explainations)
int findPower(int n, int power){
    if(power == 0){
        return 1;
    }

    int smallerProblem = findPower(n, power-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

// Optimised logic - 
// f(n) = f(n/2) * f(n/2) if even
// f(n) = n * f(n/2) * f(n/2) if odd
// it means- 2^4 = 2^2 * 2^2 and 2^5 = 2 * 2^2 * 2^2
// Why is this optimised ??? 
// eg - 2^1024 -> 2^512 -> 2^256 -> 2^128 -> 2^64 -> 2^36 -> 2^16 -> 2^8 -> 2^4 -> 2^2 -> 2^1 -> 2^0
// it means we have decreased no of computations from 1024 times to approx 12 times only !!! 
int exponent(int i, int j){
    if(j==0){
        return 1;
    }

    if (j & 1) {
        return i*exponent(i,j/2)*exponent(i,j/2);
    } else {
        return exponent(i,j/2)*exponent(i,j/2);
    }

}


int main(){

    int n = 2;
    int power = 6;

    cout << n << " raised to " << power << " is " << findPower(n, power) << endl;
    cout << n << " raised to " << power << " is " << exponent(n, power) << endl;

    return 0;
}