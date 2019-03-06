#include "stdio.h"

// Commandes importantes GDB
//
// run <arguments> <au> <programme>
// where / backtrace (affiche la pile d'appel de fonction)
// list (affiche le code autour du point d'arrêt)
// c / continue (jusqu'au prochain breakpoint)
// s / step (continuer l'exécution une instruction à la fois)
// n / next (même que step mais considère une fonction comme une seule instruction)
// break fichier:ligne ou break nom_de_fonction
// commands (exécute des commandes gdb automatiquement lors de déclenchement de breakpoint)

void affiche(char *message) {
  int i = 3;

  do {
    printf("%c", (*message) + i);
  } while (*++message);
  printf("\n");
}

void rec(int r)
{
	printf("rec %d \n",r);
	if (r>0)
	rec(r+1);
}

int main() {
	rec(5);
	
  char *mess1 = NULL;
  char *mess2 = "Hello world.";
  affiche(mess2);
  affiche(mess1);
  return 1;
}













// popop
// popop
// popop
