#include <iostream>
#include<vector>
using namespace std;

int main(){


    vector<int> v;
    vector<int> temp;

    int k=3;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);

    int n = v.size();

    for(int i=0; i<n; i++){
        temp[(i+k)%n] = v[i];
    }

    for(int i:temp){
        cout << i <<" ";
    }

    return 0;
}