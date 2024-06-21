#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l;
	cin>>n>>l;
	long long ac_sum = 0;
	for (int i=0;i<n-1;i++){
		int num_drone;
		cin>>num_drone;
		ac_sum +=num_drone;
	}
	long long total_sum = (long long)n * (2 * l + n - 1) / 2;
		long long mis_drone = total_sum - ac_sum;
		cout<<mis_drone<<"\n";
	return 0;
}

