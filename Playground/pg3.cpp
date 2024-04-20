#include <iostream>
using namespace std;

bool isPalindrome(string& s, int i, int n){
    if(i > (n-i-1))
        return true;

    if(s[i] != s[n-i-1]){
        return false;
    }

    isPalindrome(s, i+1, n);
}

int main(){

    string s = "aba";
    int n=3;

    if(isPalindrome(s,0,n)){
        cout << "Is palindrome!" << endl;
    }else{
        cout << "Isn't palindrome!" << endl;
    }

    return 0;
}