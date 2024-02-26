#include <iostream>
using namespace std;

string reverseString(string s, int st, int end){

    if(st>end){
        return s;
    }

    swap(s[st], s[end]);

    return reverseString(s,st+1,end-1);
}

int main(){

    string s = "abcdefg";
    int st = 0;
    int end = s.size()-1;
    cout << reverseString(s, st, end );

    
    return 0;
}