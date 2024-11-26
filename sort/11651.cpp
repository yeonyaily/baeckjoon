#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, x, y;
    vector<pair<int, int> > v;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> x >> y;
        v.push_back(make_pair(y,x));
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++){
        cout << v[i].second << " " << v[i].first << "\n";
    }
    
    return 0;
}