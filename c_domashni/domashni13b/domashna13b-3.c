void delete_node(struct Node* root, int key) {
    struct Node* current = root;
    struct Node* parent = NULL;

    //go barame elementot
    while (current != NULL && current->key != key) {
        parent = current;
        if (key < current->key) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    if (current == NULL) {
        // elementot ne postoi
        return;
    }

    if (current->left == NULL && current->right == NULL) {
        // elementot ne list
        if (parent == NULL) {
            // elementot sto go brisheme e koren
            root = NULL;
        } else if (current == parent->left) {//ako e list i e levo dete roditelot povrzi go so null od levo
            parent->left = NULL;
        } else {
            parent->right = NULL;//ako e list i e desno dete povrzi go roditelot desno so null
        }
        free(current);
    } else if (current->left != NULL && current->right != NULL) {
        // ako elementot ima dve deca kje ideme da go najdeme najmaliot element na desnoto podrvo(dvizejki se levo) i so nego da go zamenime elemetot sto sakame da go izbriseme
        struct Node* min_right = current->right;
        while (min_right->left != NULL) {
            min_right = min_right->left;
        }
        current->key = min_right->key;
        delete_node(current->right, min_right->key);
    } else {
        // ako ima edne dete proveruvame dali e koren ako ne e ako ima levo dete go zamenuvame so levoto ako ne so desnoto dete
        struct Node* child = (current->left != NULL) ? current->left : current->right;
        if (parent == NULL) {
            // Елементот што го бришеме е корен на дрвото
            root = child;
        } else if (current == parent->left) {
            parent->left = child;
        } else {
            parent->right = child;
        }
        free(current);
    }
}
