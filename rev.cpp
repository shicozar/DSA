#include <iostream>

using namespace std;

void revarray(int a[],int n){
	int i=0;
	int j=n-1;
	while(i<=j){
		swap(a[i],a[j]);
		i++;
		j--;
	} 
	for(int k=0;k<n;k++){
		cout<<a[k]<<" ";
	}
}

int main(){
	
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);
	revarray(a,n);
	return 0;

}