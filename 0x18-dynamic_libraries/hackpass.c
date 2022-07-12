#include <stdlib.h>
#include <unistd.h>

/**
 * puts - pretends to be the c puts function
 *
 * Returns: 9, 8, 10, 24, 75 and 9 sequentially
 */
int puts(const char *s)
{
	const char *nums_txt = "9 8 10 24 75 - 9\n";
	const char *txt = "Congratulations, you win the Jackpot!\n";

	//(void)seed;
	write(STDOUT_FILENO, (void *)nums_txt, 17);
	write(STDOUT_FILENO, (void *)txt, 38);
	exit(EXIT_SUCCESS);
}
