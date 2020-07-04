#include <stdio.h>

int main(int argc, char **argv) {
	int i=0;
	printf("Primer ejemplo\n");
    printf("%d es argc\n", argc);

    for (i=0; i<argc; i++){
        printf("%s\n", argv[i]);
    }
}