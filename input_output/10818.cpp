#include <iostream>
#include <sstream>

using namespace std;

int N;

int max(int *nums);
int min(int *nums);

int main(){
    int num, *nums, count=0;
    string input;
    stringstream ss;

    cin >> N;
    cin.ignore();
    getline(cin, input);

    nums = new int[N];
    ss.str(input);

    while (ss >> num){
        nums[count] = num;
        count++;
    }

    cout << min(nums) << " " << max(nums) << endl;

    delete[] nums;

    return 0;
}

int max(int *nums){
    int max = nums[0];

    for(int i=1; i<N; i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }

    return max;
}

int min(int *nums){
    int min = nums[0];

    for(int i=1; i<N; i++){
        if(min > nums[i]){
            min = nums[i];
        }
    }

    return min;
}