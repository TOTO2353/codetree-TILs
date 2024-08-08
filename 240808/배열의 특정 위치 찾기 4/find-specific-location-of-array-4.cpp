#include <iostream>
using namespace std;

int main() {

    int arr[10];
    int cnt=0;
    int sum =0;
    int i;

    for (int i=0; i<10; i++){
        cin >> arr[i];
    }

  

    for (int i=0; i<10; i++){

        if (arr[i]==0)
          break;
        
        if(arr[i]%2==0){

         sum += arr[i];
         cnt ++;
        }
    }
    
    cout << cnt << ' ' << sum;


    // 여기에 코드를 작성해주세요.
    return 0;
}