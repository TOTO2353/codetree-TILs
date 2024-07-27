#include <iostream>
using namespace std;

int add_n;


int Add (int n) {
    int add_n=0;
    for (int i =1 ; i<=n; i++)
            add_n +=i;
    return add_n/10;
    }

int main() {
    int n;
    cin >> n;
   
    cout << Add(n) ;
    // 여기에 코드를 작성해주세요.
    return 0;
}