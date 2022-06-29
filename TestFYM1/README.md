README

INTRODUCTION

- WINDOWS : 

Pour lancer le projet vous devez suivre le tuto ci dessous pour installer le compilateur GCC :

https://code.visualstudio.com/docs/cpp/config-mingw

et a l'etape 4 suivre les instructions pour installer mingw : https://www.msys2.org/

Pour compiler le projet vous avez besoin des lignes de commandes suivante dans un terminal sur visual studio code:
Attention veillez a bien vous trouvez dans l'arboresence du dossier TestFYM1 : 
1) g++ main.cpp -o test
2) ./test

- MAC :
Suivre ce tutoriel : 

https://code.visualstudio.com/docs/cpp/config-clang-mac
    

CONTENU DU PROGRAMME :

    void init(int tab[]);
    fonction qui initialise le tableau. Cette fonction rempli un tableau avec les valeurs 1,2,3,4 et 5 grâce à une boucle qui avance sur les cases du tableau.

    void affiche(int tab[]);
    fonction qui permet d'afficher le tableau grâce à une boucle qui parcours les cases du tableau.

    void square(int tab[]);
    fonction qui parcours les cases du tableau et met chaque valeur au carré en multipliant la valeur par elle-même.

    void cube(int tab[]);
    fonction qui parcours les cases du tableau et met chaque valeur au cube en multipliant deux fois la valeur par elle-même.

    void average(int tab[]);
    fonction qui permet grâce a une boucle d'additionner chaque valeur et de stocker le résultat dans une variable nommée res. Puis la fontion affiche le résultat trouvé divisé par size c'est à dire la taille du tableau prédéfinie par l'utilisateur.

    void sum(int tab[]);
    fonction qui permet grâce a une boucle d'additionner chaque valeur et de stocker le résultat dans une variable nommée res.

    void even(int tab[]);
    fonction qui permet grâce à une boucle de parcourir les cases du tableau et d'interroger si la valeur de l'indice est pair celle-ci est affichée, sinon elle n'est pas affichée.

    void odd(int tab[]);
    fonction qui permet grâce à une boucle de parcourir les cases du tableau et d'interroger si la valeur de l'indice est impair celle-ci est affichée, sinon elle n'est pas affichée.