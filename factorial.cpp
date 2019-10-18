#include <iostream>
using namespace std;

int array[2000];
int main(){
	int t, f, m, i, j, tmp;
	cin>>t;
	while(t--){
		cin>>f;
		array[0] = 1;
		m = 1;
		for(i=2; i<=f;i++){
			tmp = 0;
			for(j=0; j<m; j++){
				array[j] = array[j]*i + tmp;
				tmp = array[j]/10;
				array[j] = array[j]%10;
			}
			while(tmp > 0){
				cout<<"tmp = "<<tmp<<"\n";
				array[m] = tmp%10;
				tmp = tmp/10;
				m++;
			}

			for(j=m-1; j>-1; j--)
				cout<<array[j];
		cout<<"\n";
		}
		for(j=m-1; j>-1; j--)
			cout<<array[j];
		cout<<"\n";
	}

}