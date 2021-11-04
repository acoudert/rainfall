#include <stdio.h>

void p() {
	char			str[32];

	fflush(stdout);
	gets(str + 4);
	//printf("(%p)\n", *(unsigned int*)(str + 44));
	if ((*(unsigned int*)(str + 44) & 0xb0000000) == 0xb0000000) {
		printf("(%p)\n", *(unsigned int*)(str + 44));
		exit(1);
	}
	puts(str + 4);
	strdup(str + 4);
}

int main() {
	p();
}
