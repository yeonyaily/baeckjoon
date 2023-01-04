#include <iostream>

using namespace std;

int main(){
    int a, b, sum;

    while(1){
        cin >> a >> b;
        if(a==0 && b==0){
            break;
        }
        sum = a + b;
        cout << sum << endl;
    }

    return 0;
}