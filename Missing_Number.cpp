#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	cin >> n;
	
	long long int x[n - 1];
		
	for(int i = 0; i < (n-1); i++){
		cin >> x[i];
	}
	
	long long int sum = (n*(n+1)) / 2;
	
	long long int sum1 = 0;
	
	for(int i = 0; i < n-1; i++){
		sum1 += x[i];
	}
	
	long long int value = sum - sum1;
	cout << value << endl;
	
	
	return 0;
}
