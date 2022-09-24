#include<iostream>
using namespace std;

int jiecheng(int n) {
	int answer = 1;
	for (int i = 1; i <= n; i++) {
		answer = answer * i;
	}
	return answer;
}

int main() {

	cout << jiecheng(4) << endl;
	return 0;
}