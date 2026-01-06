#include <iostream>
using namespace std;

// boilerplate - comment - for comment lines

int main() {
    int n = 5;
    bool isPrime = true;
    for (int i = 2; i<= n; i++) {
        if(n % i ==0 ) {
            isPrime = false;
            break;
        }
    }
    if(isPrime = true) {
        cout << "Prime no\n" << endl;
    } else{
        cout << "Not prime no\n" <<endl;
    }
    return 0;
}