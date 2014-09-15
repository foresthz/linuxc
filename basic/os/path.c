#include <stdlib.h>
#include <string.h>
#include<stdio.h>
int main() {
	char buf[1024];
	system("ls /");
	// apue P135
	printf("%s\n", getcwd(buf,sizeof(buf)));
	printf("%s\n", buf);
	printf("concat string: %s\n", strcat(buf ,"name.c") );
}
