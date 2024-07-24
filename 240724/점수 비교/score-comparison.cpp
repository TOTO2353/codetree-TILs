#include <iostream>
using namespace std;

int main() {
    int A_m,  B_m;
    int A_e, B_e;
    cin >> A_e >>B_e ;
    cin >> A_m >>B_m;

    if (A_e>B_e && A_m>B_m) {
        cout << 1;
    }

    else cout << 0;
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}