#include <iostream>
using namespace std;

int main() {
    int n;
    
    int count_a =0;
    int count_b =0;
    int count_c =0;
    cin >>n;
  

    for (int i=1; i<=n ; i++){
        if (i%12==0)
            count_c++;
        else if (i%3==0)
            count_b++;
        else if (i%2==0)
            count_c++;
       
    }

    cout << count_c <<' '<< count_b << ' '<< count_a;
    // 여기에 코드를 작성해주세요.
    return 0;
}