#include <stdio.h>
#include <unistd.h>

int main(void)
{
	if (symlink("test.txt", "sl.del") == -1) {
		perror("failed to create symbol link");
		exit(1);
	}
}
