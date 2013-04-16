104_light
=========

found repertorty of light with others  geographic form


Le but est de calculer les points à l’intersection d’une droite avec une
surface telle que un cylindre, une sphère ou un cône. Ce problème traite la
question de l’impact d’un rayon lumineux (droite) sur un objet solide déli-mité par son contour visible (portion de surface).
On commence par un début de résolution "sur papier". On écrit, en di-mension trois, les trois équations paramétriques de la droite et l’équation de
la surface. Ces équations sont toutes vérifiées par les points intersections.
On injecte les équations de la droite dans l’équation de la surface. On ob-tient, pour trouver la valeur du paramètre, une équation du second degré
à résoudre par ordinateur. Cette équation du second degré admet zéro, une
ou deux solutions. On en déduit l’existence de zéro, un ou deux points d’in-tersection et on calcule leurs coordonnées d’après les valeurs du paramètre
trouvées.
3 Le sujet
La droite est donnée par un point par lequel elle passe et son vecteur
directeur. On donne successivement les trois coordonnées du point, puis les
trois coordonnées du vecteur directeur.
La surface est déterminée suivant les trois cas par :
– le cylindre d’axe Oz : rayon R du cylindre.
– la sphère centrée à l’origine : le rayon R de la sphère.
– le cône de sommet l’origine : l’angle A entre le plan Oxy et la surface
du cône (comme la coordonnée sphérique).
On prévoit trois options de lancement du logiciel, suivant que la surface
considérée est le cylindre, la sphère ou le cône.
1
4 Le logiciel
Répertoire de rendu :
˜
/rendu/math/104light
Le répertoire
˜
/ en 711. Ce répertoire surtout pas en 710.
Le répertoire rendu en 710.
Les répertoires en 750, les fichiers en 640.
Nom de l’exécutable : 104light
Exemple de lancer pour l’option 1 :
> 104light 1 0 0 2 1 1 0 1
En entrée : le numéro d’option, les 3 coordonnées des points de la droite,
les 3 coordonnées du vecteur directeur de la droite, la valeur du rayon du
cylindre.
En sortie : Une description de la droite et de la surface, le nombre de points
d’intersection trouvés et leurs coordonnées. (voir exemple).
Exemple de lancer pour l’option 2 :
> 104light 2 0 0 2 1 1 0 1
En entrée : le numéro d’option, les 3 coordonnées des points de la droite,
les 3 coordonnées du vecteur directeur de la droite, la valeur du rayon de la
sphère.
En sortie : Idem.
Exemple de lancer pour l’option 3 :
> 104light 3 0 0 2 1 1 0 45
En entrée : le numéro d’option, les 3 coordonnées des points de la droite, les
3 coordonnées du vecteur directeur de la droite, la valeur de l’angle du cône.
En sortie : Idem.
2
5 Exemple
Voici les sorties obtenues pour les 3 options :
> 104light 1 0 0 2 1 1 0 1
CYLINDRE de rayon R = 1
DROITE passant par le point (0,0,2) et de vecteur directeur (1,1,0)
Nombre de points d’intersection : 2
Point 1 : (-0,7071,-0,7071,2)
Point 2 : (0,7071,0,7071,2)
> 104light 2 0 0 2 1 1 0 1
SPHERE de rayon R = 1
DROITE passant par le point (0,0,2) et de vecteur directeur (1,1,0)
Nombre de points d’intersection : 0
> 104light 3 0 0 2 1 1 0 45
CONE d’angle = 45˚
DROITE passant par le point (0,0,2) et de vecteur directeur (1,1,0)
Nombre de points d’intersection : 2
Point 1 : (-1,414,-1,414,2)
Point 2 : (1,414,1,414,2)
6 Le code
Votre code sera examiné. Les codes bien structurés, commentés et lisibles
seront appréciés.
7 Questions
1˚Quelle est la forme générale de l’équation d’un plan en coordonnées
cartésiennes ?
2˚ Quelle est la forme générale de l’équation d’une droite en coordonnées
cartésiennes ?
3˚Quelle est l’équation en coordonnées cartésiennes d’un cylindre de section
circulaire de rayon R et d’axe vertical porté par Oz ?
4˚Quelle est l’équation en coordonnées cartésiennes d’une sphère centrée à
l’origine de rayon R?
5˚Quelle est l’équation en coordonnées sphériques d’un cône dont le sommet
est l’origine ?
