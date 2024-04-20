#include <iostream>
using namespace std;
string numbers[10] = {"zero","one", "two", "three", "four", "five", "six", "seven","eight","nine"};

void sayDigits(int n){

    //base case
    if(n==0){
        return;
    }

    int digit = n%10;

    sayDigits(n/10);

    cout << numbers[digit] << endl;

}

int main(){

    int n;
    cout << "\nEnter a number : ";
    cin >> n;
    cout << endl;
    sayDigits(n);

    return 0;
}