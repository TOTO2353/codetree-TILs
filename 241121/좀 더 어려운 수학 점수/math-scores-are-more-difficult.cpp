#include <iostream>
using namespace std;

int main() {
    int math_socreA; int math_socreB;
    int english_scoreA; int english_scoreB;

    cin >> math_socreA >> english_scoreA;
    cin >> math_socreB >> english_scoreB;

    if(math_socreA==math_socreB){
        if(english_scoreA > english_scoreB){
            cout << "A";
        }
        else {
            cout << "B";
        }
    }

    else {
        if (math_socreA>math_socreB){
            cout <<"A";
        }
        else cout << "B";
    }
    return 0;
}