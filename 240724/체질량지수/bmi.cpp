#include <iostream>
using namespace std;

int main() {

    int h,w;
    double b;
    cin >> h >>w;
    b=(10000*w)/(h*h);

    if (b>=25){

        cout << b <<endl<<"Obesity";
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}