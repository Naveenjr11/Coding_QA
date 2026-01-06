#include <iostream>
using namespace std;


// for number pattern as a Squre

// int main(){
//     int n=4;

//     for (int i=1; i<=n; i++){

//         for(int j=1; j<=n; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

//===============================================================================================

// for star pattern as a Squre

// int main(){
//     int n=3;

//     for (int i=0; i<n; i++){

//         for(int j=0; j<n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output
// * * *
// * * *
// * * *

//===============================================================================================

// for ABCD pattern as a Squre

// int main(){
//     int n = 3;

//     for (int i=0; i<=n; i++){
//         char ch ='A';
//         for(int j=0; j<n; j++){
//             cout <<" " << ch;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output
// A B C
// A B C
// A B C

//===============================================================================================

// for 123 pattern in square

// int main(){
//     int n =3;

//     int num =1;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << num <<" ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output
// 1 2 3
// 4 5 6
// 7 8 9

//===============================================================================================

// ABCD Pattern in squre

int main(){
    int n =3;
    char ch='A';

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ch <<" ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}

// output
// A B C
// D E F
// G H I