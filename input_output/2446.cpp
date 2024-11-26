#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=1; i<N*2; i++){
        int a = i;
        if(i>N) a=2*N-i;

        for(int j=1; j<a; j++){
            cout << " ";
        }
        for(int k=0; k<(N-a)*2+1; k++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}