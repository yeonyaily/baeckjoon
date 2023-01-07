#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string str;
    int N;

    cin >> str;
    N = str.length();

   for(int i=1; i<N+1; i++){
        cout <<str[i-1];
        if(i%10==0) cout << endl;
    }


}