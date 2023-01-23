#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    vector<int> x;
    vector<int> y;

    cin >> N;

    for(int i=0; i<N; i++){
        int first, second;
        cin >> first;
        x.push_back(first);
        cin >> second;
        x.push_back(second);
    }


    return 0;
}