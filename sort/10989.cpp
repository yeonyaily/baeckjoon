#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, input, num[10001]={0};

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> input;
        num[input]++;
    }

    for(int i=1; i<10001; i++){
        if(num[i]==0){
            continue;
        }else{
            for(int j=0; j<num[i]; j++){
                cout << i << "\n";
            }
        }   
    }
    
    return 0;
}

/*
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

위의 코드는 C++의 표준 stream의 동기화를 끊는 역할을 한다.
따라서 CIN과 COUT의 속도가 높아진다.
*/