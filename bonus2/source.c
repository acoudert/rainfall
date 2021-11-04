int	language = 0;

void greetuser(char *str) {
	char	buf[72];

	if (language == 1) {
		strcpy(buf, "Hyvää päivää ") 
	} else if (language == 2) {
		strcpy(buf, "Goedemiddag! ");
	} else if (language == 0) {
		strcpy(buf, "Hello ");
	}
	strcat(buf, str);
	puts(s);
}

int main(int ac, char **av) {
	char	buf1[10];
	char	buf2[36];
	char	*lang;

	if (ac == 3) {
		strncpy(buf1, av[1], 40);
		strncpy(buf2, av[2], 32);
		lang = getenv("LANG");
		if (lang) {
			if (memcmp(lang, "fi", 2) == 0) {
				language = 1;
			} else if (memcmp(lang, "nl", 2) == 0) {
				language = 2;
			}
		}
		return greetuser(buf1);
	} else {
		return 1;
	}
}
