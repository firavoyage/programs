#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int r=0;
	for(int i=0;i<=n;i++){
		for(int j=1;j<=i;j++){
			r+=j;
		}
	}
	cout<<r;
	return 0;
}
