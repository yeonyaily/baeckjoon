#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i=1; i<N*2; i++){
        int a = i;
        if(i>N) a=2*N-i;

        for(int j=0; j<a; j++){
            cout << "*";
        }
        for(int k=a; k<2*N-a; k++){
            cout << " ";
        }
        for(int h=2*N-a; h<2*N; h++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}