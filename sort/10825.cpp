#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
//#include <tuple>

using namespace std;

struct Student
{
    string name;
    int ko, en, ma;
};

bool compare(Student now, Student next){
    if(now.ko!=next.ko){
        return now.ko > next.ko;
    }else if(now.en!=next.en){
        return now.en < next.en;
    }else if(now.ma!=next.ma){
        return now.ma > next.ma;
    }else{
        return now.name < next.name;
    }
}

int main(){
    int N, ko, en, ma;
    Student student;
    vector<Student> v;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> student.name >> student.ko >> student.en >> student.ma;
        v.push_back(student);
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<N; i++){
        cout << v[i].name << "\n";
    }
    
    return 0;
}


/*tuple 사용
bool compare(tuple<string, int, int, int> now, tuple<string, int, int, int> next){
    if(get<1>(now)!=get<1>(next)){
        return get<1>(now) > get<1>(next);
    }else if(get<2>(now)!=get<2>(next)){
        return get<2>(now) < get<2>(next);
    }else if(get<3>(now)!=get<3>(next)){
        return get<3>(now) > get<3>(next);
    }else{
        return get<0>(now) < get<0>(next);
    }
}

int main(){
    int N, ko, en, ma; 
    string name;
    vector<tuple<string, int, int, int> > v;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> name >> ko >> en >> ma;
        v.push_back(make_tuple(name, ko, en, ma));
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<N; i++){
        cout << get<0>(v[i]) << "\n";
    }
    
    return 0;
}
*/