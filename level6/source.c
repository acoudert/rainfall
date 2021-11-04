#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	n() {
	system("/bin/cat /home/user/level7/.pass");
}

void	m() {
	puts("Nope");
}

int main(int ac, char **argv) {
	char	*s;
	void	(*fptr)();

	s = malloc(64);
	fptr = malloc(4);
	fptr = &m;
	strcpy(s, argv[1]);
	(*fptr)();
}
