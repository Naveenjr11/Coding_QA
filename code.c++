#include <iostream>
using namespace std;


int minoftwo(int a, int b){
    if(a<b){
        return a;
    } else{
        return b;
    }

}

int main(){
    cout << "min= "<< minoftwo(5,10) <<endl;
    return 0;
} 