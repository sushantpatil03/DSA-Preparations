// prime numbers program

#include <iostream>
using namespace std;

void is_prime(int no);

int main(){
    
    int no;
    int i;
    

    // cout << "Enter a number : ";
    // cin >> no;

    // if(no==2){
    //     cout << "2 is a prime number";
    //     exit(1);
    // }
    // for(i=2;i<=no/2;i++){
    //     if(no%i == 0){
    //         if_prime = false;
    //         break;
    //     }
    // }
    // if(if_prime){
    //     cout << no << " is a prime number";
    // }else{
    //     cout << no << " isn't a prime number";

    // }

    for(i=2;i<=100;i++){
        is_prime(i);
    }

    return 0;
}

void is_prime(int no){
    bool if_prime = true;
    if(no==2){
        cout << "\n2 is a prime number";
        return;
    }
    for(int i=2;i<=no/2;i++){
        if(no%i == 0){
            if_prime = false;
            break;
        }
    }
    if(if_prime){
        cout << no << " is a prime number\n";
    }else{
        // cout << no << " isn't a prime number\n";

    }
}