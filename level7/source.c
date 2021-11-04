#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

char	*s;

void	m() {
	time_t	t;

	t = time(0);
	printf("%s - %d\n", s, t);
}

int		main(int ac, char **argv) {
	int	*m1;
	int	*m2;

	m1 = malloc(8);
	m1[0] = 1;
	m1[1] = (int)malloc(8);
	m2 = malloc(8);
	m2[0] = 2;
	m2[1] = (int)malloc(8);
	strcpy((char*)m1[1], argv[1]);
	strcpy((char*)m2[1], argv[2]);
	fgets(s, 68, fopen("/home/user/level8/.pass", "r"));
	puts("~~");
	return 0;
}
