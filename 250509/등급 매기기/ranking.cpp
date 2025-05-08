#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N>=90){
        cout << "A";
    }

    else if (80<=N && N<90){
        cout << "B";
    }

    else if (70<=N && N<80){
        cout <<"C";
    }

    else if (60<=N && N<70){
        cout <<"D";
    }

    else cout << "F";
    // Please write your code here.
    return 0;
}