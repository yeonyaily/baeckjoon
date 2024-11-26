#include <iostream>

using namespace std;

int main(){
    int num, sum=0;
    string input;

    cin >> num >> input;


    for(int i=0; i<num; i++){
        sum += input[i] - '0';
    }

    cout << sum << endl;

    return 0;
}

// 아래 로직은 숫자 최대 범위를 벗어나는 예시는 풀리지 않음.
// int main(){
//     int num, input, sum=0;

//     cin >> num >> input;


//     for(int i=0; i<num; i++){
//         sum += input % 10;
//         input = input/10;
//     }

//     cout << sum << endl;

//     return 0;
// }

