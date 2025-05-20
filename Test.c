// ----- Importation des libraires -----

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ----- Définitions globales -----

// ----- Déclarations prototypes fonctions -----

//Création de l'échiquier

/*
 *int size_Enter() {
    int size;
    char answer;
    do {
        printf("\nQuelle taille allant de 6x6 a 12x12 fera le plateau ? [6,7,8,9,10,11,12]\n");
        scanf("%s", &answer);
        size = strtol(&answer, NULL, 10);
    } while (!(size >= 6 || size <= 12));
    return size;
}
*/

void board() {
    int size;
    typedef struct {
        int color;
        int captured = 3;
        int contours;
    }Case;

    Case board[size][size];
    for (int i = 0; i < size+1; i++) {
        board[i][1].contours = i+1;
        board[1][i].contours = i+1;
    }
    printf("%d",board[2][2].color);
}



//Return white, if 1 then is White, if 0 then is Black.
int* player_Choice(int* White) {
    srand(time(NULL));
    White+=rand()%1;
    return White;
}



void random_Bullshit_In_Test(){



}
// Déclaration de la structure position
typedef struct {
    int x;
    int y;
} Position;

// Fonction pour permet de déplacer le fous
void deplacerFou(int taille, char grille[size][size], Position *pos) {
    // Efface l'ancienne position
    grille[pos->x][pos->y] = ' ';

    // Déplacement simple : diagonale bas-droite
    pos->x++;
    pos->y++;

    // Vérifie les limites
    if (pos->x >= size || pos->y >= size) {
        // Remet à une position valide ou inverse direction (selon ce que tu veux)
        pos->x = 0;
        pos->y = 0;
    }

    // Met à jour la grille avec la nouvelle position du fou
    grille[pos->x][pos->y] = '*';
}
    
}

//Se lance au début du jeu
void game() {





}
