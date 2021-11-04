#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void o() {
	system("/bin/sh");
	exit(1);
}

void n() {
	char	s[520];

	fgets(s, 512, stdin);
	printf(s);
	exit(1);
}

int main() {
	n()
}
