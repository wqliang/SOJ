#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
	int t, n, b[100], r[100], length;
	string input;
	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		for (int i = 0; i < n; ++i)
			scanf("%d", &b[i]);
		cin >> input;
		length = input.length();

		for (int i = 0; i < n; ++i){
			int ans = 0;
			int x = 0;
			for (int j = 0; j < length; ++j){
				x = ans * 10 + (input[j] - '0');
				ans = x % b[i];
			}
			r[i] = ans;
		}
		printf("(%d", r[0]);
		for (int i = 1; i < n; ++i)
			printf(",%d", r[i]);
		printf(")\n");
	}
	system("pause");
	return 0;
}