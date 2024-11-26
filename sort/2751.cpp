#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    vector<int> v;
    cin >> N;

    for(int i=0; i<N; i++){
        int input;
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout << v.at(i) << '\n';
    }
    return 0;
}