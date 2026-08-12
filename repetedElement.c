#include<stdio.h>

int main(){
	int n;
	printf("enter size of array - ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements");
	if(arr == 0 || n == 0){
		printf("array is empty or undefined");
		return 0;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans ^= arr[i]; 
	}
	printf("%d",ans);
}
