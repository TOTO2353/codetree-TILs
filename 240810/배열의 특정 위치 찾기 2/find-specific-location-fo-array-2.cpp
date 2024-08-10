#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum_odd=0;
    int sum_even=0;

    for (int i=0; i<10; i++){
        cin >> arr[i];
    }

    for (int i=0; i<10; i+=2){
        sum_odd+=arr[i];
    }



    for (int i=1; i<=10; i+=2){
        sum_even+=arr[i];
    }

    if (sum_even>=sum_odd){
        cout << sum_even-sum_odd;
    }

    else cout << sum_odd-sum_even;

    
    // 여기에 코드를 작성해주세요.
    return 0;
}