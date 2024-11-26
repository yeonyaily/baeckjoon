#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num, a, b, sum;

    cin >> num;

    for(int i=0; i<num; i++){
        scanf("%d,%d", &a, &b);
        sum = a + b;
        cout << sum << endl;
    }

    return 0;
}