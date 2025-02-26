#include <iostream>
using namespace std;

int factorial(int n) {
	//base case
	if(n == 1) 
		return 1;
	if(n == 0)
		return 1;

	//processing

	//recursive relation
	int recursionKaAns = factorial(n-1);

	//processing
	int finalAns = n * recursionKaAns;
	return finalAns;
}

void print(int n) {
	//base case
	if(n == 1) {
		cout << 1 << " ";
		return;
	}
	//processing
	cout << n << " ";
	//recursion call
	print(n-1);
} 

int pow(int n) {
	//base case
	if(n == 0) {
		return 1;
	}

	int ans = 2 * pow(n-1);
	return ans;
}

int fib(int n) {
	//base case
	if(n == 0) 
		return 0;
	if(n == 1) 
		return 1;

	int ans = fib(n-1) + fib(n-2);
	return ans;
} 
int sum(int n ) {
	//base case
	if(n == 1)
		return 1;

	int ans = n + sum(n-1);
	return ans;
}
int main() {
	cout << sum(5) << endl;
	//cout << fib(7) << endl;
	//cout << pow(10) << endl;
  	//print(5);
	//cout << factorial(5) << endl;

	return 0;
}