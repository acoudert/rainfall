#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

void p(char *a, char *b) {
	char	buf[4100];

	puts(b);
	read(0, buf, 4096);
	strchr(buf, '\n')[0] = 0;
	strncpy(a, buf, 20);
}

char *pp(char *s) {
	unsigned int	counter;
	char			*buf;
	unsigned int	len;
	char			a[20];
	char			b[20];

	p(a, " - ");
	p(b, " - ");
	strcpy(s, a);
	buf = s;
	counter = UINT_MAX;
	while (*buf && counter) {
		buf++;
		counter--;
	}
	len = ~counter;
	len--;
	s[len] = ' ';
	strcat(s, b);
}

int	main() {
	char	s[30];

	pp(s);
	puts(s);
	return 0;
}
