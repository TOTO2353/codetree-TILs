#include <iostream>
using namespace std;

void Rectangular(int N) {
    int num = 1; // 시작 숫자를 1로 설정
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << num << " "; // 숫자를 출력하고 공백을 추가
            num++; // 숫자를 증가
            if (num == 10) { // 숫자가 10이 되면 다시 1로 리셋
                num = 1;
            }
        }
        cout << endl; // 한 줄이 끝나면 줄 바꿈
    }
}

int main() {
    int row_num;
    cin >> row_num;

    Rectangular(row_num);

    return 0;
}