#include <iostream>
using namespace std;

int main() {
    int A_math, A_English;
    int B_math, B_English;

    cin >> A_math >> A_English;
    cin >> B_math >> B_English;

    if ((A_math == B_math) && (A_English !=B_English)){
        if (A_English > B_English) {
            cout << "A";
        }

        else cout << "B";
    }

    if (A_math != B_math) {
        if ( A_math > B_math ){
            cout << "A";
        }

        else cout << "B";
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}