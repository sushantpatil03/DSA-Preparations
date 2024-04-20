#include <iostream>
using namespace std;
// f(n) = f(n/2) * f(n/2) if even
// f(n) = n * f(n/2) * f(n/2) if odd

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

    int i=5; 
    int j=6;

    cout << i << "^" << j << " = " << exponent(i,j);

    return 0;
}