#include <iostream>

using namespace std;

int main(){
    int month, date, total=0;
    string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    cin >> month >> date;

    for(int i=1; i<month; i++){
        if(i == 2){
            total += 28;
        }else if(i==4||i==6||i==9||i==11){
            total += 30;
        }else{
            total += 31;
        }
    }
    total += date;
    cout << day[total%7] << endl;

    return 0;
}