#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v(10,0);

    v[0]++;
    v[1]++;
    v[3]++;

    for(int i=0; i<10; i++){
        cout << " " <<v[i];
    }

    return 0;
}