#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=1; i<N+1; i++){
        for(int j=N; j>0; j--){
            if(j>i){
                cout << " ";
            }
        }
        for(int k=0; k<i*2-1; k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}