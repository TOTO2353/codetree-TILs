#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >>b >>c;
    int med;

    if ( ( a>b && a<c ) || ( a>c && a<b )){
        med=a;
    }
    

    else if ( b>a && b>c || b>c && b>a ){
        med=b;
    }

    else med=c;

    cout << med << endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}