#include <iostream>
#include <vector>
#include <algorithm> // This is important for sort() function
using namespace std;

int main(){

    vector<int> v;

    v.push_back(20);
    v.push_back(30);
    v.push_back(10);
    v.push_back(60);
    v.push_back(50);

    sort(v.begin(), v.end());

    for(int n: v){
        cout << n << " ";
    }

    return 0;
}