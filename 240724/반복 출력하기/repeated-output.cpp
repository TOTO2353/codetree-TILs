#include <iostream>
using namespace std;

void Print5Stars(int n){
    for(int i=0; i<n; i++) {
    
        cout << "12345^&*()_" << endl;
    }

}

int main() {
    int row_num;
    cin >> row_num;

    Print5Stars(row_num);
    // 여기에 코드를 작성해주세요.
    return 0;
}