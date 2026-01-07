#include <iostream>
using namespace std;


int FactN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact = fact * i;

    }
    return fact;
}

int main(){
    cout << "sum of N= "<< FactN(5) <<endl;
    cout << "sum of N= "<< FactN(10) <<endl;
    return 0;
} 