#include<stdio.h>
#include<time.h>
int binsearch(int x, int v[], int n){
	int low, high, mid;
	low = 0;
	high = n-1;
	mid = (low + high) / 2;
	while(low < high && x != v[mid]){

		if(x > v[mid]){
			low = mid + 1;
		}else{
			high = mid - 1;
		}

		mid = (low + high) / 2;
	}
	if(x == v[mid]){
		return mid;
	}else{
		return -1;
	}
}

int main(){
	
	int arr[] = {2,4,6,7,26,33,46,51,63,76};
	clock_t begin = clock();
	printf("%d", binsearch(9, arr, 10));
	clock_t end = clock();
	double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
	printf("Time spent : %lf\n", time_spent);	

	return 0;
}
