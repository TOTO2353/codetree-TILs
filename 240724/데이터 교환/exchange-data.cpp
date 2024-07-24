#include <iostream>
using namespace std;

int main() {
    int a=5; int b=6; int c=7;
    int temp=a;
    int temp_1=b;
    int temp_2=c;

    a=b;
    c=b;
    a=c;

    b=temp;
    c=temp_1;
    a=temp_2;

    cout << a <<endl<<b<<endl<<c;  

    // 여기에 코드를 작성해주세요.
    return 0;
}