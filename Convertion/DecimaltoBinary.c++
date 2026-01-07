#include <iostream>
using namespace std;

int DecToBinary(int DecNum){
    int ans = 0, pow = 1;

    while(DecNum > 0 ){
        int rem = DecNum % 2;
        DecNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int DecNum = 10;

    cout << DecToBinary(DecNum) << endl;
    return 0;
}