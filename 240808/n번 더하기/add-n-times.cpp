#include <iostream>
using namespace std;

int main() {
    int a,n;
    cin >> a >> n;

    for (int i=0; i<n; i++){
        cout << a+n << endl;
        a=a+n;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}