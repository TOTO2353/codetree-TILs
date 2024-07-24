#include <iostream>
using namespace std;

int main() {
    cout << fixed;

    int a,b;
    cin >> a >>b;
    double c;
    c=(double)(a+b)/(a-b);
    cout.precision(2);
    cout <<c;
    // 여기에 코드를 작성해주세요.
    return 0;
}