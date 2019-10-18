#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, KStep,k, start, end, j;
	scanf("%d%d", &n,&k);
	int weight[n+1];
	vector<int> ans(n+1, INT_MAX);
	for(int i=0;i<n;i++)
		scanf("%d", &weight[i]);
	ans[0] = 0;
	ans[1] = abs(weight[1] - weight[0]);
	for(int i=2;i<n;i++){

		if(i<k) j = 0;
		else j = i-k;

		for(; j< i;j++){
			KStep = abs(weight[i] - weight[j]) + ans[j];
			if(ans[i] > KStep) ans[i] = KStep;
		}
	}
	/*for(int i=0;i<n;i++)
		printf("%d %d|", i, ans[i]);
	printf("\n");*/
	printf("%d\n", ans[n-1]);

}
