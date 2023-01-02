#include <stdio.h>
#include <stdlib.h>

#define NUM_COLORS 100

// Structure pour stocker les détails d'une couleur
typedef struct {
  unsigned char r;
  unsigned char g;
  unsigned char b;
  unsigned char a;
} Color;

// Structure pour stocker une couleur distincte et son compte
typedef struct {
  Color color;
  int count;
} DistinctColor;

int main(void) {
  // Création du tableau de couleurs
  Color colors[NUM_COLORS];


  for (int i = 0; i < NUM_COLORS; i++) {
    colors[i].r = rand() % 2;
    colors[i].g = rand() % 2;
    colors[i].b = rand() % 2;
    colors[i].a = rand() % 2;
  }



  // Tableau de couleurs distinctes
  DistinctColor distinctColors[NUM_COLORS];
  int numDistinctColors = 0; // Nombre de couleurs distinctes

  // Parcours du tableau de couleurs
  for (int i = 0; i < NUM_COLORS; i++) {
    // Recherche de la couleur dans le tableau de couleurs distinctes
    int j;
    for (j = 0; j < numDistinctColors; j++) {
      if (colors[i].r == distinctColors[j].color.r &&
          colors[i].g == distinctColors[j].color.g &&
          colors[i].b == distinctColors[j].color.b &&
          colors[i].a == distinctColors[j].color.a) {
        distinctColors[j].count++;
        break;
      }
    }

    if (j == numDistinctColors) {
      // Couleur non présente, ajout dans le tableau de couleurs distinctes
      distinctColors[numDistinctColors].color = colors[i];
      distinctColors[numDistinctColors].count = 1;
      numDistinctColors++;
    }
  }

  // Affichage du résultat
  for (int i = 0; i < numDistinctColors; i++) {
    printf("%3d %3d %3d %3d %d\n",
           distinctColors[i].color.r,
           distinctColors[i].color.g,
           distinctColors[i].color.b,
           distinctColors[i].color.a,
           distinctColors[i].count);
  }

  return 0;
}
