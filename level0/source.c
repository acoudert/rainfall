#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define __USE_GNU
#define _GNU_SOURCE
#include <unistd.h>

int		main(int ac, char **av) {
	if (atoi(av[1]) == 423) {
		char *strs[2];
	   	strs[0] = strdup("/bin/sh");
		int egid = getegid();
		int euid = geteuid();
		setresgid(egid, egid, egid);
		setresuid(euid, euid, euid);
		strs[1] = 0;
		int a = execv("/bin/sh", strs);
	} else {
		fwrite("No !\n", 1, 5, stderr);
	}
	return 0;
}
