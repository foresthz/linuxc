#include <stdio.h>
#include <unistd.h>

int main(void)
{
	if (symlink("test.txt", "sl.del") == -1) {
		// output system error when error happens
		perror("failed to create symbol link");
		exit(1);
	} else {
		printf("symlink created\n");
	}
}
