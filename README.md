# get_next_line [![jdubilla's 42 get_next_line Score](https://badge42.vercel.app/api/v2/clh0zpc7j005408l9j6q6srae/project/2426873)](https://github.com/JaeSeoKim/badge42)

Le projet Get Next Line consiste en l'écriture d'une fonction qui permet de lire et de renvoyer une ligne à la fois à partir d'un fichier (ou d'un descripteur de fichier) donné en entrée.

## Objectif

L'objectif principal de ce projet est d'apprendre à utiliser les allocations dynamiques de mémoire, les opérations d'entrée/sortie sur des fichiers et les variables statiques. Ce projet permet également de se familiariser avec les concepts de pointeurs et de tableaux à une dimension.

## Utilisation

La fonction get_next_line prend en entrée un descripteur de fichier et un pointeur sur une chaîne de caractères. La fonction renvoie 1 lorsqu'elle a lu une ligne avec succès, 0 lorsqu'elle a fini de lire le fichier et -1 en cas d'erreur. La ligne lue est stockée dans la chaîne de caractères pointée par le deuxième paramètre.

Le prototype de la fonction est le suivant :

` int get_next_line(int fd, char **line); `

Pour utiliser la fonction, on peut inclure le fichier get_next_line.h dans le programme.

## Exécution

Une fois le programme compilé avec succès, on peux exécuter l'exécutable en utilisant la commande suivante :


` ./gnl [nom du fichier] `

où [nom du fichier] est le nom du fichier que vous souhaitez tester. Assurez-vous que le fichier se trouve dans le même répertoire que l'exécutable ou spécifiez le chemin absolu du fichier si ce n'est pas le cas.

L'exécutable affichera le contenu du fichier ligne par ligne en utilisant la fonction get_next_line. Si la fonction renvoie -1, cela indique qu'il y a eu une erreur lors de la lecture du fichier. Si la fonction renvoie 0, cela indique que la fin du fichier a été atteinte avec succès.
