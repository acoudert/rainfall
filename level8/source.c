#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

char	*service;
char	*auth;

int main() {
	char			*buf;
	char			*test;
	unsigned int	counter;
	char			input[32];

	while (1) {
		printf("%p, %p \n",auth,service);
		if (fgets(input, 128, stdin)) {
			buf = input;
			test = "auth ";
			counter = 5;
			while ((*buf == *test) && counter) {
				buf++;
				test++;
				counter--;
			}
			if ((*buf > *test) && counter == 0) {
				auth = malloc(4);
				buf = input + 5;
				counter = UINT_MAX;
				while (*buf && counter) {
					buf++;
					counter--;
				}
				counter = ~counter;
				counter--;
				if (counter <= 30) {
					strcpy(auth, input + 5);
				}
			}
			buf = input;
			test = "reset";
			counter = 5;
			while ((*buf == *test) && counter) {
				buf++;
				test++;
				counter--;
			}
			if ((*buf > *test) && counter == 0) {
				free(auth);
			}
			buf = input;
			test = "service";
			counter = 6;
			while ((*buf == *test) && counter) {
				buf++;
				test++;
				counter--;
			}
			if ((*buf > *test) && counter == 0) {
				service = strdup(input + 7);
			}
			buf = input;
			test = "login";
			counter = 5;
			while ((*buf == *test) && counter) {
				buf++;
				test++;
				counter--;
			}
			if ((*buf > *test) && counter == 0) {
				if (*(auth + 32)) {
					system("/bin/sh");
				}
				else {
					fwrite("Password:\n", 1, 10, stdout);
				}
			}
		}
	}
	return 0;
}
