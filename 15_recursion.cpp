#include <iostream>
using namespace std;

int findPower(int n){
    if(n==0){
        return 1;
    }

    int smallerProblem = findPower(n-1);
    int biggerProblem = 2*smallerProblem;

    return biggerProblem;
}

int factorial(int n){
    if(n==0){
        return 1;
    }

    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main(){

    // Power of 2 recursion f(n) = 2 * f(n-1)
    int n;
    cout << "\nEnter a number : ";
    cin >> n;
    
    cout << endl;
    cout << findPower(n);

    // Factorial relation f(n) = n * f(n-1)
    cout << "\nEnter a number : ";
    cin >> n;

    cout << endl;
    cout << factorial(n);


    return 0;
}