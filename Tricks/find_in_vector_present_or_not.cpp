#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec {1,3,4,5,6,7};
    if ( find(vec.begin(), vec.end(), 9) != vec.end() )
       cout << "found";
    else
       cout << "not found";
    return 0;
}