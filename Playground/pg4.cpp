#include <iostream>
using namespace std;

void update(int& n){
    n++;
}

int main(){

    // int n;
    // cout << "\nEnter a number : ";
    // cin >> n;

    // int i = 5;
    // int &j = i;

    // j++;
    // i++;

    // cout << j << endl;

    int n = 5;
    update(n);
    cout << n << endl;

    



    return 0;
}