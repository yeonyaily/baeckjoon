#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            cout << " ";
        }
        cout << "*";
        if(i==0){
            cout << endl;
            continue;
        }

        for(int j=0; j<2*i-1; j++){
            cout << " ";
        }
        cout << "*" << endl;
    }
    for(int k=0; k<2*N-1; k++){
            cout << "*";
        }

    return 0;
}