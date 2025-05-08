#include <iostream>
using namespace std;

int main() {
    int N;
    cin >>N;

    if ( N>=3000){
        cout << "book";
    }

    else if ( N<3000 && N>=1000){
        cout <<"mask";
    }

    else cout << "no";
    // Please write your code here.
    return 0;
}