#include <iostream>

using namespace std;

int main(){
    int num, a, b, sum;

    cin >> num;

    for(int i=0; i<num; i++){
        cin >> a >> b;
        sum = a + b;
        cout << "Case #" << i+1 << ": " << sum << endl;
    }

    return 0;
}