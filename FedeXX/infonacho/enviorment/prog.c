#include "link.h"

int main(int argc, char *argv[], char *envp[]) {
	int i=0;
	char *nom;

	while(envp[i]!=NULL) {
		if(strstr(envp[i],"USER") != NULL) {
			nom = strchr(envp[i],'=') + 1;
		}
		i++;
	}

	printf("El usuario %s ejecuto este programa\n", nom);
}