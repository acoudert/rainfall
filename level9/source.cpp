#include <stdlib.h>
#include <cstring>

class N {
	public:
		N(int n) : _n(n) {};
		void	setAnnotation(char *s) {
			memcpy(this->_s, s, strlen(s));
		}
		int		operator+(N& op) {
			return this->_n + op._n;
		}
	private:
		char	*_s;
		int		_n;
};

int	main(int ac, char **av) {
	N	*a;
	N	*b;

	if (ac < 2) {
		exit(1);
	}
	a = new N(5);
	b = new N(6);
	a->setAnnotation(av[1]);
	return *b + *a;
}
