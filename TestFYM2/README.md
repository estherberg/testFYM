README

INTRODUCTION
WINDOWS : 

Pour lancer le projet vous devez suivre le tuto ci dessous pour installer le compilateur GCC :

https://code.visualstudio.com/docs/cpp/config-mingw

et a l'etape 4 suivre les instructions pour installer mingw : https://www.msys2.org/

Pour compiler le projet vous avez besoin des lignes de commandes suivante dans un terminal sur visual studio code:
Attention veillez a bien vous trouvez dans l'arboresence du dossier TestFYM2 : 
1) g++ main.cpp -o test
2) ./test

MAC :
Suivre ce tutoriel : 

CONTENU DU PROGRAMME :

array = [1,2,1]





int valOdd(int tab[])

Tout d'abord, on initialise un compteur. 

Puis on va faire une boucle dans une boucle. 

A la premiere itération, on compare le premier chiffre à lui-même et on ajoute 1 au compteur. 

Ainsi s'il n'ya qu'un chiffre dans le tableau, on le retournera car il y'aura une occurence impair de ce nombre puisqu'il n'apparait qu'une fois.

Pour un tableau plus long, grâce a la 2eme boucle on avance dans le tableau en continuant de comparer la valeur d'après avec la première du tableau.
Si celles-ci sont égales, le compteur augmente sinon, la condition n'est pas appliquée et la boucle continue son parcours.

Dès que la première boucle a terminée son parcours, on pose une condition: si le compteur est impair, le programme s'arrette là et renvoie l'élement du tableau puisqu'il n'éxiste qu'un chiffre dans le tableau qui se répète de manière impair. 

Sinon si le compteur est pair la boucle i augmente et on refait la même chose jusqu'à ce que le compteur soit impair.
