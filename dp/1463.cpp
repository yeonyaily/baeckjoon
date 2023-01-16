#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int X;
    int dp[1000001];

    cin >> X;

    dp[1] = 0;

    for(int i=2; i<X+1; i++){
        dp[i] = dp[i-1] + 1;
        if(i%3==0) dp[i] = min(dp[i], dp[i/3]+1);
        if(i%2==0) dp[i] = min(dp[i], dp[i/2]+1);
    }

    cout << dp[X] << endl;

    return 0;
}