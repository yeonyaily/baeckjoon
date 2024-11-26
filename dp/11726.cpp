#include <iostream>

using namespace std;

int main(){
    int N;
    int dp[1001];

    cin >> N;

    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<N+1; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;
    }

    cout << dp[N] << endl;

    return 0;
}