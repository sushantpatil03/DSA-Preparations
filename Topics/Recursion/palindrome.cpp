#include <iostream>
using namespace std;

bool isPalindrome(string s, int i, int n){
    if(i>(n/2)){
        return true;
    }

    if(s[i] != s[n-i]){
        return false;
    }else{
        return isPalindrome(s, i+1, n);
    }

    
}

int main(){

    string s = "abcba";
    int n = s.length()-1;
    if(isPalindrome(s, 0, n))
        cout << "It is palindrome!!";
    else 
        cout << "It isn't palindrome!!";

    return 0;
}