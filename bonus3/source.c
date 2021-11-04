#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int ac, char **av) {
	FILE	*file;
	char	buf1[66];
	char	buf2[65];

	file = fopen("/home/user/end/.pass", "r");
	if (file == 0 || ac != 2) {
		return 1;
	}
	fread(buf1, 1, 66, file);
	buf1[atoi(av[1])] = 0;
	fread(buf2, 1, 65, file);
	fclose(file);
	if (strcmp(buf1, av[1]) == 0) {
		execl("/bin/sh", "sh", 0);
	} else {
		puts(buf2);
	}
	return 0;
}
