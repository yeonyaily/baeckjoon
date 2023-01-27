#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(const pair<int, string> now, const pair<int, string> next){
    if(now.first==next.first){
        return 0;
    }else{
        return now.first < next.first;
    }
}

int main(){
    int N, age;
    string name;
    vector<pair<int, string> > v;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> age >> name;
        v.push_back(make_pair(age,name));
    }

    stable_sort(v.begin(), v.end(), compare);

    for(int i=0; i<N; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
    return 0;
}

// 그냥 sort로도 예시는 되지만 안정성이 떨어지나봄