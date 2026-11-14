# tp10_cpp
EXERCICE1

<img width="303" height="323" alt="image" src="https://github.com/user-attachments/assets/2e6b1d8c-4998-4c97-a97a-33e062e8dfaa" />


Dans cet exercice, j’ai créé un programme qui demande à l’utilisateur de saisir la taille d’un tableau d’entiers. J’ai utilisé l’allocation dynamique avec `new[]` pour réserver la mémoire nécessaire, puis j’ai permis à l’utilisateur de saisir et d’afficher les éléments du tableau à l’aide de boucles. Enfin, j’ai utilisé `delete[]` pour libérer la mémoire allouée et `nullptr` pour éviter de conserver un pointeur vers une zone mémoire déjà libérée.

EXERCICE2

<img width="293" height="188" alt="image" src="https://github.com/user-attachments/assets/d8fad596-b593-40c9-a0ec-9276c21cb7a6" />


Dans cet exercice, j’ai créé une classe `Personne` contenant deux attributs : `nom` et `age`. J’ai utilisé un constructeur pour initialiser les attributs lors de la création de l’objet. Dans la fonction `main`, j’ai alloué dynamiquement un objet `Personne` à l’aide de `new`, puis j’ai affiché ses informations en utilisant un pointeur. Enfin, j’ai libéré la mémoire avec `delete` et affecté `nullptr` au pointeur.

EXERCICE3

<img width="402" height="329" alt="image" src="https://github.com/user-attachments/assets/6e5cc736-6778-49b2-88af-6a258cedf950" />

Dans cet exercice, j’ai créé une classe `Livre` contenant deux attributs privés : `titre` et `prix`. J’ai utilisé un constructeur par défaut pour initialiser les attributs, ainsi que deux méthodes pour saisir et afficher les informations des livres. Dans la fonction `main`, j’ai demandé à l’utilisateur le nombre de livres à créer, puis j’ai alloué dynamiquement un tableau d’objets `Livre` avec `new[]`. J’ai rempli et affiché chaque élément du tableau à l’aide d’une boucle. Enfin, j’ai libéré la mémoire avec `delete[]` et affecté `nullptr` au pointeur.

EXERCICE4

<img width="291" height="356" alt="image" src="https://github.com/user-attachments/assets/5c37336e-f4d1-4b08-ace4-893c04f3d6c4" />


<img width="344" height="346" alt="image" src="https://github.com/user-attachments/assets/9df95fc0-feda-4d31-8a1f-804288ca7f08" />


<img width="359" height="343" alt="image" src="https://github.com/user-attachments/assets/7dbcee60-b2ee-44d2-8b54-f3ebc7d6862a" />

 
<img width="357" height="186" alt="image" src="https://github.com/user-attachments/assets/961fe0b3-e352-43a6-9ee0-e314b27ed91f" />



Dans cet exercice, j’ai créé une classe `Contact` contenant trois attributs privés : `nom`, `telephone` et `email`. J’ai utilisé un tableau dynamique de pointeurs `Contact**` pour gérer le carnet d’adresses. Chaque contact est créé dynamiquement avec `new` et ajouté au tableau. J’ai implémenté des fonctions permettant d’ajouter, d’afficher et de supprimer un contact à partir de son nom. La fonction `supprimerContact` libère l’objet avec `delete`, décale les pointeurs suivants et met à jour le nombre de contacts. Enfin, avant de quitter le programme, j’ai libéré tous les objets restants avec `delete`, puis le tableau de pointeurs avec `delete[]`, afin d’éviter les fuites mémoire.


