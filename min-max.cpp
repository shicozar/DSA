#include <iostream>
#include <climits>

using namespace std;

int main(){
	
	int a[]={2,1,4,5,7,3,9,8};
	int n=sizeof(a)/sizeof(int);
	
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
		if(a[i]>max){
			max=a[i];
		}
	}
	
	cout<<max<<endl<<min<<endl;
	

	return 0;


}