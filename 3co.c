#include<stdio.h>
#include<stdbool.h>

int check(int array[],int arrSize){
	int odds=0;
	for(int i=0;i<arrSize;i++){
		if(array[i] % 2 != 0){
			odds += 1;
			if(odds == 3){
				printf("{%d,%d,%d} are 3 consecutive odd numbers\n",array[i-2],array[i-1],array[i]);
				break;
			}
		}
		else{
			if(i!=arrSize){
				odds = 0;
			}
			else{
				printf("there are no 3 consecutive odd numbers\n");
			}
		}
	}
}

void main(){
	int arr[] = /*put your array here */;
	size_t size = sizeof(arr)/sizeof(arr[0]);
	check(arr,size);
}
