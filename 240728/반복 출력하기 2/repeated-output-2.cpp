#include <iostream>
using namespace std;

void PrintN (int n){
    if(n==0) {
        return;
    }

    PrintN (n-1); {
        cout << "HelloWorld";
    cout << endl;
    }
}

int main() {
    int n;
    cin >>n;
    PrintN(n);

    return 0;
}