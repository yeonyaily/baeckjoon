#include <iostream>

using namespace std;

int main(){
    long long N, dp[101][10], mod=1000000000, answer=0;

    cin >> N;

    dp[1][0] = 0;
    for(int i=1; i<10; i++){
        dp[1][i] = 1;
    }

    for(int i=2; i<N+1; i++){
        for(int j=0; j<10; j++){
            if(j==0) dp[i][j] = dp[i-1][j+1] % mod;
            else if(j==9) dp[i][j] = dp[i-1][j-1] % mod;
            else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % mod;
        }
    }

    for(int i=0; i<10; i++){
        answer += dp[N][i] % mod;
    }

    cout << answer % mod << endl;

    return 0;
}