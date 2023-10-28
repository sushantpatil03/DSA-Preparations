#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    int n;
    cout << "Enter n : ";
    cin >> n;

    int ans = 0;
    
    int i = 0;

    while(n!=0){
        int bit = n & 1;

        // cout << "\nPower : "<<pow(10,i);
   
        ans = (bit * pow(10,i)) + ans;
        
        n = n >> 1;
        i++;

        cout << "\nbit : "<<bit<<"\tans : "<<ans<<"\tn : "<<n<<"\ti : "<<i;
    }

    cout << "\nAnswer : " << ans << "\n";
    
    return 0;
}