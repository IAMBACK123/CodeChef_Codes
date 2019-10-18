#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n, k, count = 0, tmp;
	//cin >> n >>k;
	scanf("%d%d", &n, &k);
	for(int i=0;i<n;i++){
		//cin >> tmp;
		scanf("%d", &tmp);		
		if(tmp%k==0) count++;
	}
	cout<<count;
}