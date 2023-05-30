#include <stdio.h>

void reset_to_98(int *n){
	if (n <= 98){
		for (; n <= 98; n++){
			if (n == 98){
				printf("%d\n", n);
				break;
			}
			else{
				printf("%d, ", n);
			}
		}
	}
	else{
		for (; n >= 98; n--){
			if (n == 98){
				printf("%d\n", n);
				break;
			}
			else{
				printf("%d, ", n);
			}
		}
	}
}
