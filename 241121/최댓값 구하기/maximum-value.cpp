#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if (a-b>=0 && a-c>=0){
        cout << a;
    }

    else if (b-a>0 && b-c>=0){
        cout << b;
    }

    else cout << c;


    return 0;
}