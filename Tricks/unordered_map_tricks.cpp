#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    // ------ How to initialise
    unordered_map<int, int> um {
        {1,9},
        {2,8},
        {3,7}
    };
    // Alternatives way - 
    // unordered_map<int, int> um;
    // um[1] = 9;
    // um[2] = 8;
    // um[3] = 7;


    // ------ Traverse through unordered map ---- 
    for(auto x: um){
        cout << "key : "<< x.first << "  Value : " << x.second << endl;
    }



    // ------ Find if key is present in um or not
    if (um.find(3) == um.end()) {
        cout << "Key absent"; //Key is not in the map
    }else{
        cout << "key present";
    }

    return 0;
}