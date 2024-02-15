#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> names = {"sush","abc","xyz"};
    vector<int> heights = {10,20,30}
    vector<pair<int,string>> v;
    for(int i=0;i<heights.size();i++){
        v.push_back({heights[i],names[i]});
    }
    sort(v.begin(),v.end(),greater<>());

    return 0;

}