#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=1; i<N*2; i++){
        int a = i;
        if(i>N) a=2*N-i;

        for(int k=0; k<N-a; k++){
            cout << " ";
        }
        for(int h=N-a; h<N; h++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}