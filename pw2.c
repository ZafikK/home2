#include <stdio.h>
#include <stdbool.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b); //7 0
	bool boola = a;
	bool boolb = b;
	printf("MODULE_READY: %d\n", boola);
    printf("FAULT_STATE: %d\n", boolb);
    printf("BOOL_SIZE: %zu\n", sizeof(bool));
    printf("FLAGS_SUM: %d\n", (int)boola + (int)boolb);
	return 0;

}
