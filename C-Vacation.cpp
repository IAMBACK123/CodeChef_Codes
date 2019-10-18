#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
	if(a > b) return a;
	else return b;
}

int main(){
	int n, i, j;
	scanf("%d", &n);
	int points_a[n+1], points_b[n+1], points_c[n+1], a, b, c, ans_a, ans_b, ans_c;
	for(i=0;i<n;i++) 
			scanf("%d %d %d", &points_a[i], &points_b[i], &points_c[i]);

	//int ans[4][n+1];
	ans_a = a = points_a[0];
	ans_b = b = points_b[0];
	ans_c = c = points_c[0];

	for(i=1;i<n;i++){
		ans_a = max(b, c) + points_a[i];
		ans_b = max(a, c) + points_b[i];
		ans_c = max(a, b) + points_c[i];

		a = ans_a;
		b = ans_b;
		c = ans_c;

	}
	/*for(i=0;i<n;i++)
			printf("%d ", i);
		printf("\n");
	for(j=0;j<3;j++){
		for(i=0;i<n;i++)
			printf("%d ", ans[i][j]);
		printf("\n");
	}*/
	printf("%d\n", max(ans_a, max(ans_b, ans_c)));
}
