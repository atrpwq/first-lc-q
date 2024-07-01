#include<stdio.h>
#include<stdbool.h>

int check(int array[],int arrSize){
	int odds=0;
	for(int i=0;i<arrSize;i++){
		if(array[i] % 2 != 0){
			odds += 1;
			if(odds == 3){
				return 1;
				break;
			}
		}
		else{
			if(i!=arrSize){
				odds = 0;
			}
			else{
				return 0;
			}
		}
	}
}

void main(){
	int arr[] = {3,4,5,4834173,113143};
	size_t size = sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",check(arr,size));
}
