#include<stdio.h>
int main() {
	int B[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &B[i]);
	}
	int max = B[0];
	for (int i = 1; i < 10; i++) {
		if (max < B[i])
			max = B[i];
	}
	for (int i = 0; i < 10; i++) {
		printf("%d£¬", B[i]);
	}
	printf("\n max= %d\n", max);
	return 0;
}