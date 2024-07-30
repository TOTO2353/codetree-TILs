#include <iostream>
using namespace std;

int Min(int a, int b, int c){
    if(a<=b && a<=c){
        return a;
    }

    else if (b<=a && b<=c){
        return b;
    
    }

    else 
        return c;

}

int main() {

int a, b, c ;
cin >> a>> b>> c;

cout << Min(a,b,c);
    // 여기에 코드를 작성해주세요.
    return 0;
}