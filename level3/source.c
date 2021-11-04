#include <stdio.h>
#include <stdlib.h>

char	m = 0;

void v() {
	char	s[520];	
	
	fgets(s, 512, stdin);
	printf(s);
	if (m == 64) {
		fwrite("Wait what?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
}

int	main() {
	v();
}
