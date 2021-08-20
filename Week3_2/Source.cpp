#include<stdio.h>
int main() {
	int i, a[20], j = 4;
	for (i = 1; i <= 4; i++) {
		if (i == 1) {
			printf("Enter first number : ");
			scanf_s("%d", &a[i]);
		}
		if (i == 2) {
			printf("Enter second number : ");
			scanf_s("%d", &a[i]);
		}
		if (i == 3) {
			printf("Enter third number : ");
			scanf_s("%d", &a[i]);
		}
		if (i == 4) {
			printf("Enter fourth number : ");
			scanf_s("%d", &a[i]);
		}
		if (a[i] % 2 == 1) {
			j = j - 1;
		}
	}
	if (j > 1) {
		printf("There are %d even number", j);
	}
	else if (j == 1) {
		printf("There is %d even number", j);
	}
	else { printf("Not found even number" );
}
	return 0;
}