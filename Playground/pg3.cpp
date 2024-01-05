#include <iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(90);
    v.push_back(100);
    v.push_back(230);

    int m = 2;

    int st = m+1;
    int end = v.size()-1;

    while(st<=end){
        swap(v[st], v[end]);
        st++;
        end--;
    }

    cout << endl;
    for(int n:v){
        cout << "\t" << n;
    }

    return 0;
}