#include "main.h"

int main() {
	char c;
	while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q') {
		putchar(c);
	};
	return (0);
}
