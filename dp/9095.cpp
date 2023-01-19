#include <iostream>

using namespace std;

int main(){
    int T, *nums, dp[12];

    cin >> T;

    nums = new int[T];

    for(int i=0; i<T; i++){
        cin >> nums[i];
    }

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i=4; i<12; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    for(int i=0; i<T; i++){
        cout << dp[nums[i]] << endl;
    }

    delete[] nums;

    return 0;
}