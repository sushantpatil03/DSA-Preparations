#include <iostream>
using namespace std;

int get_a_no(){
    int n;
    cout << "\nEnter a number : ";
    cin >> n;
    return n;
}

void pat1(){

    // 12345
    // 12345
    // 12345
    // 12345
    // 12345

    int n = get_a_no();

    cout << "\n";
    for(int i=1; i <= n; i++){
        cout << "\n";
        for (int j=1; j <=n; j++){
            cout << j;
        }
    }
}

void pat2(){

    // 123
    // 456
    // 789

    int n = get_a_no();

    cout << "\n";
    int i = 1;
    while(i<=n*n){
        cout << "\t" << i;
        if(i%n==0){
            cout << "\n";
        }
        i++;
    }
}

int main(){

    pat1();
    pat2();

   

    return 0;
}