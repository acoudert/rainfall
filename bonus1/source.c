#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av) {
	unsigned int	v;
	char			buf[40];

	v = atoi(av[1]) <= 9;
	if (v <= 9) {
		memcpy(buf, av[2], 4 * v);
		if (v == 1464814662) {
			execl("/bin/sh", "sh", 0);
		}
	} else {
		return 1;
	}
	return 0;

}
