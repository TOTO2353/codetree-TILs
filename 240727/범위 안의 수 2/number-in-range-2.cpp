#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    int count=0 ;
    int sum =0;
    cout << fixed;
   

    for ( i=1; i<=10; i++){
        cin >> n;
        if (n>=0 && n<=200){
        sum += n;
        count ++;}
        
    }

    cout << sum <<' ';

    cout.precision(1);
    if (count >0){
        cout <<  static_cast<double> (sum)/count;
        }
    else {cout <<0;}
    return 0;
}