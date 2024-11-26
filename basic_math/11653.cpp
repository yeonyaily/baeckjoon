#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void num_split(int num);

int main(){
	int input;

	cin >> input;

    num_split(input);

	return 0;
}

void num_split(int num){
	int div = 2;

	if(num==1){
		return;
	}else{
		while(num%div!=0) div++;
        cout << div << endl;
		num_split(num/div);
	}
}
