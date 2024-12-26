#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int n, int arr[]){
	for(int i = 0; i < n-1; i++){
		int stop = 0;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				stop++;
			}
		}
		if(stop == 0){
			return;
		}
	}
}

int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	bubbleSort(n, arr);
	for(int i = 0; i < n; i++){
		printf("%d\t", arr[i]);
	}
	return 0;
}

