#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, oneStep, twoStep;
	scanf("%d", &n);
	int ans[n+1], weight[n+1];
	for(int i=0;i<n;i++)
		scanf("%d", &weight[i]);
	ans[0] = 0;
	ans[1] = abs(weight[1] - weight[0]);
	for(int i=2;i<n;i++){
		oneStep = abs(weight[i] - weight[i-1]) + ans[i-1];
		twoStep = abs(weight[i] - weight[i-2]) + ans[i-2];
		if(oneStep < twoStep) ans[i] = oneStep;
		else ans[i] = twoStep;
	}
	printf("%d\n", ans[n-1]);

}
