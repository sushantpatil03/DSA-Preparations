#include <iostream>
using namespace std;

int main(){
    int a=0,b=1;
    int n;
    cout << "\nEnter a no : ";
    cin >> n;
    cout << "\n";
    for(int i=1;i<=n;i++){
        int temp = b;
        b = a+b;
        a = temp; 
        cout << "\t"<<b;
    }

    return 0;
}