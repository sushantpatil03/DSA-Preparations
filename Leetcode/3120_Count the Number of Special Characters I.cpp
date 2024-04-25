#include <iostream>
using namespace std;

int main(){

    string s = "DabdcABCC";

    int a[26] = {0};
    int b[26] = {0};

    for(char ch: s){
        cout << "\nCharacter is: " << ch;
        if(ch>='a' && ch<='z'){
            cout << "\nlowercase";
            a[ch - 'a']++;
        }else if(ch>='A' && ch<='Z'){
            cout << "\nuppercase";
            b[ch - 'A']++;
        }
    }

    int c=0;
    for(int i=0; i<26; i++){
        if(a[i] >= 1){
            if(b[i] >= 1){
                c++;
            }
        }
    }

    cout << "\n\nCount is -> " << c;

    return 0;
}