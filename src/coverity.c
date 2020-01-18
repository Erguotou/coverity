/*
 ============================================================================
 Name        : coverity.c
 Author      : Jerome
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fd = fopen("test.bin", "r");
	int id[2];
	size_t size = fread((void*) id, sizeof(int), 2, fd);
	if (size == 2)
		printf("%d, %d\n", id[0], id[1]);
	fclose(fd);
	return EXIT_SUCCESS;
}
