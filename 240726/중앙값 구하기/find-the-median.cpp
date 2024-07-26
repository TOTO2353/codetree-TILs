#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >>b >>c;

    if ( ( a>b && a<c ) || ( a>c && a<b )){
        cout<<a;
    }
    

    else if ( b>a && b>c || b>c && b>a ){
        cout << b;
    }

    else cout << c;
    // 여기에 코드를 작성해주세요.
    return 0;
}