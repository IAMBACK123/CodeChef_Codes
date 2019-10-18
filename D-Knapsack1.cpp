# include<bits/stdc++.h>

using namespace std;

long long int max(long long int a, long long int b){
	if(a > b) return a;
	else return b;
}

int main(){
	int n, w, i, j;
	scanf("%d%d", &n, &w);
	long long int ans[n+1][w+1], weight[n+1][2];

	for(i=0; i<n; i++) scanf("%lld%lld", &weight[i][0], &weight[i][1]);

	for(i=0; i<n; i++) ans[i][0] = 0;

	for(i=0; i<=w; i++){
		if(i >= weight[0][0]) ans[0][i] = weight[0][1];
		else ans[0][i] = 0;
	}

	for(i=1; i<n; i++){
		for(j=1;j<=w;j++){
			if(j<weight[i][0]) ans[i][j] = ans[i-1][j];
			else{
	/*			if(j==w-2)
				printf("=>%lld %lld %lld\n", ans[i-1][j], ans[i-1][w-weight[i][0]] + weight[i][1], max(ans[i-1][j], ans[i-1][w-weight[i][0]] + weight[i][1]));*/
				ans[i][j] = max(ans[i-1][j], ans[i-1][j-weight[i][0]] + weight[i][1]);
			}
		}
	}
	/*printf("    ");
	for(i=0; i<w; i++) printf("%d ", i);
		printf("\n");
	for(i=0; i<n; i++){
		printf("%lld %lld|", weight[i][0], weight[i][1]);
		for(j=0;j<=w;j++)
			printf("%lld ", ans[i][j]);
		printf("\n");
	}*/

	printf("%lld\n", ans[n-1][w]);
	return 0;
}