// This is the simplest way - 

#include <iostream>
using namespace std;

int findPower(int n, int power){
    if(power == 0){
        return 1;
    }

    int smallerProblem = findPower(n, power-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}


int main(){

    int n = 2;
    int power = 6;

    cout << n << " raised to " << power << " is " << findPower(n, power) << endl;

    return 0;
}