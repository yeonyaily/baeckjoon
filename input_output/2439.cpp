#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=N; i>0; i--){
        for(int j=1; j<N+1; j++){
            if(j<i){
                cout << " ";
            }else{
                cout << "*";
            }
        } 
        cout << endl;
    }

    return 0;
}