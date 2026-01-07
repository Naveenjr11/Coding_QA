#include <iostream>
using namespace std;

int BinToDec(int BinNum){
    int ans = 0, pow =1;

    while(BinNum > 0){
        int rem = BinNum % 10;
        ans += pow * rem;

        BinNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main (){
    cout << BinToDec(101010)<<endl;
    return 0;
}