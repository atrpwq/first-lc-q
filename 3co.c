#include<stdio.h>
#include<stdbool.h>

int check(int array[],int arrSize){
	int odds=0;
	for(int i=0;i<arrSize;i++){
		if(array[i] % 2 != 0){
			odds++;
			if(odds == 3){
				printf("{%d,%d,%d} are 3 consecutive odd numbers\n",array[i-2],array[i-1],array[i]);
				break;
			}
		}
		else{
			odds = 0;
		}
	}
}

void main(){
	int arr[] = /*put your array here */;
	size_t size = sizeof(arr)/sizeof(arr[0]);
	check(arr,size);
}
