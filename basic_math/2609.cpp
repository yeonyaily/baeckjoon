#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void num_split(int num, vector<int> &v);

int main(){
	int input1, input2, A=1, B;
	vector<int> v1, v2;

	cin >> input1 >> input2;

	num_split(input1, v1);
	num_split(input2, v2);

	while(v1.size()!=0){
		auto it = find(v2.begin(), v2.end(), v1.front());
		if(it != v2.end()){
			v2.erase(v2.begin() + (it-v2.begin()));
			A = A * v1.front();
		}
		v1.erase(v1.begin());
	}

	B = A * (input1/A) * (input2/A);

	cout << A << endl << B << endl;

	return 0;
}

void num_split(int num, vector<int> &v){
	int div = 2;

	if(num==1){
		sort(v.begin(), v.end());
		return;
	}else{
		while(num%div!=0) div++;
		v.push_back(div);
		num_split(num/div, v);
	}
}
