#include <iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    int j = 1;
    cout << "Enter a number : ";
    cin >> n;

    while(i<=n){
        cout << "\n";
        while(j<=n){
            cout << i <<"\t";
            j++;
        }
        i++;
        j = 1;
    }

    return 0;
}