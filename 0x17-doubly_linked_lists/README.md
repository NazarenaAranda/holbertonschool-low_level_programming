DOUBLY LINKED LISTS:
---------------------------
![R (1)](https://user-images.githubusercontent.com/98347450/173187392-2c56d514-165e-43c9-b5c7-429c62c17058.gif)

WHAT IS IT?:
--------
The doubly linked lists have 2 pointers: first and last, this is mandatory. Thanks to this we can traverse this list by any of the two ends. Generally a doubly linked list is recognized by its struct, but there is the possibility that they do not have a struct, the two pointers can be "loose". In turn, the nodes of the doubly linked lists differ from those of a linked lists, in that in addition to having a pointer to the next node, they also have a pointer to the previous node. This allows us that when standing on any node of the list I can easily move from one side to the other. In the case of the first node, the pointer to the previous node points to NULL, because there is no other node before the first one. The same thing happens with the last node, when we want to move to the following node it would point us to NULL, since it is the last one.

WHEN IT IS USED:
--------------------------------
It is convenient to use when you need to go through the list in both directions, or when you want the previous element to a given one, that is to say if I am in a node and not only I want to go to the following node, but also I need to go to the previous node. In other words in the case of wanting the previous node is used to avoid having to go through the list from the beginning.




----------------------------------------------------------------




DOUBLY LINKED LISTS:
---------------------------
![R (1)](https://user-images.githubusercontent.com/98347450/173187392-2c56d514-165e-43c9-b5c7-429c62c17058.gif)

QUÉ ES?:
--------
Las doubly linked lists tienen 2 punteros: primero y ultimo, esto es obligatorio. Gracias a esto podemos recorrer esta lista por cualquiera de los dos extremos. Generalmente se reconoce a una doubly linked lists por su struct, pero existe la posibilidad de que no tengan una struct, pueden estar los dos punteros "sueltos". A su vez los nodos de la doubly linked lists se diferencian de los de una linked lists, en que ademas de tener un puntero al siguiente nodo, tambien tiene un puntero al nodo anterior. Esto nos permite que al estar parados en cualquier nodo de la lista puedo facilmente moverme hacia un lado a hacia otro. En el caso del primer nodo el puntero al nodo anterior, apunta a NULL, porque no existe otro nodo antes que el primero. Lo mismo pasa con el ultimo nodo, al querer movernos al nodo siguiente nos apuntaria a NULL, ya que es el ultimo.

CUANDO SE USA?:
--------------------------------
Es conveniente usar cuando se necesita recorrer la lista en ambos sentidos, o cuando se quiera el elemento anterior a uno dado, es decir si estoy en un nodo y no solo quiero ir al nodo siguiente, si no que tambien necesito ir al nodo anterior. En otras palabras en el caso de querer el nodo anterior se usa para no tener que recorrer la lista desde el comienzo.
