#include <iostream>
using namespace std;

int main(){

    int arr[3] = {10,20,30};

    cout << arr[1] << endl;
    cout << 1[arr] << endl;

    int a = 5;
    int *p = &a;
    cout << &a << endl;
    cout << p << endl;

    int *q = &a;
    cout << *q << endl;
    *q = 10;
    cout << *p << endl;

    string abc = "abc";
    // cout << abc[1];

    // string str = "hello";
    // str.insert(0, 'a');
    // cout << str << endl;

    string str = "world";
    char ch = 'E'; // Character to add to the beginning of the string

    // Using insert function to add character at the beginning
    str.insert(0, 1, ch);
    str.insert(0, 1, 'H');

    cout << str << endl;


    return 0;
}