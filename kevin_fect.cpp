#include<iostream>

using namespace std;

inline int fact(int n){
	
	int fact =1;
	for(int i = 1; i<=n; i++){
		
		fact*=i;
	}
	return fact;
}

int main(){
	
	int arr[] = {2,3,4,5,6};
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for(int i=0; i<n; i++){
		
		cout << "Fectorial of" << arr[i] << " is "<< fact(arr[i])<<endl;
	}
	return 0;
}
