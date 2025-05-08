#include <iostream>
using namespace std;

int main() {

    int A; int B;
    cin>>A>>B;

    cout << (A>=B) << endl;
    cout << (A>=B) << endl;
    cout << (A>=B) << endl;
    cout << (A>=B) << endl;
    


    if(A>B){
        cout << 1 << endl;
    }
    else { cout << 0 <<endl;}

    if(B>=A){
        cout << 1 << endl;
    }
    else { cout << 0 <<endl;}

    if(B>A){
        cout << 1 << endl;
    }
    else { cout << 0 <<endl;}

    if(A==B){
        cout << 1 << endl;
    }
    else { cout << 0 <<endl;}

    if(A!=B){
        cout << 1 << endl;
    }
    else { cout << 0 <<endl;}

    // Please write your code here.
    return 0;
}