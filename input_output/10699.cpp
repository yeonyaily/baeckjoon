#include <iostream>

using namespace std;

int main(){
	int cnt, num1, num2;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	cin >> cnt;

    for(int i=0; i<cnt; i++){
        cin >> num1 >> num2;
        cout << num1 + num2 <<"\n";

    }

    // scanf("%d", &cnt);

    // for(int i=0; i<cnt; i++){
    //     scanf("%d %d", &num1, &num2);
    //     printf("%d\n", num1 + num2);
    // }

    return 0;
}