#include <iostream>

using namespace std;

int main(){
    long long N, dp[1001][10] = {0}, mod=10007, answer=0;

    cin >> N;

    for(int i=0; i<10; i++){
        dp[1][i] = 1;
    }

    for(int i=2; i<N+1; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<j+1; k++){
                dp[i][j] = (dp[i][j] + dp[i-1][k]) % mod;
            }
        }
    }

    for(int i=0; i<10; i++){
        answer = (answer + dp[N][i]) % mod;
    }

    cout << answer % mod << endl;

    return 0;
}

// 배열을 사용할 때는 초기화를 꼭 하기
// A += B % mod 가 아닌 A = (A + B) % mod 로 식 세우기