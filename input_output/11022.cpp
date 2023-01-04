#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num, a, b, sum;

    cin >> num;

    for(int i=0; i<num; i++){
        cin >> a >> b;
        sum = a + b;
        printf("Case #%d: %d + %d = %d\n", i+1, a, b, sum);
    }

    return 0;
}