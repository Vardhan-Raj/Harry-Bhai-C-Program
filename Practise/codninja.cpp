// #include <bits/stdc++.h>
// #include <algorithm>

// using namespace std;

// int numberOfWays(int n)
// {
// 	if (n == 1 || n == 2)
// 		return n;
// 	int mod = 1e9 + 7;
// 	int lastendans = 1;
//     int endans = 2;
// 	int finalans;
// 	for (int i = 3; i <= n; i++)
// 	{
// 		finalans = (endans % mod + (1l * (i - 1) * lastendans) % mod) % mod;
// 		lastendans = endans;
// 		endans = finalans;
// 	}

// 	return finalans;
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int MAX = 100;
int mat[MAX][MAX];

void fillRemaining(int i, int j, int n){
	int x = 2;
	for (int k = i + 1; k < n; k++)
		mat[k][j] = x++;
	for (int k = 0; k < i; k++)
		mat[k][j] = x++;
}

void constructMatrix(int n){
	int right = n - 1, left = 0;
	for (int i = 0; i < n; i++){
		if (i % 2 == 0){
			mat[i][right] = 1;
			fillRemaining(i, right, n);
			right--;
		}
		else{
			mat[i][left] = 1;
			fillRemaining(i, left, n);
			left++;
		}
	}
}

int main(){
	int n = 5;

	constructMatrix(n);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
	return 0;
}