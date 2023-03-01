/*Напиши програма која внесува елементи со функцијата vnesi несортирано, на крајот на листата,
 ја користи функцијата sortOpagjanje која сортира елементи во опаѓачки редослед, функцијата sortRastenje 
 која ги сортира елемнтите во растечки редослед, 
brisi која брише елемент со дадена содржина. Елементите на листата се целобројни елементи.*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


void vnesi(struct Node** head, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    struct Node* last = *head;
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}


void sortRastenje(struct Node** head) {
    struct Node *i, *j;
    int temp;

    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}


void sortOpagjanje(struct Node** head) {
    struct Node *i, *j;
    int temp;

    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data < j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}


void brisi(struct Node** head, int key) {
    struct Node *temp = *head, *prev;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

void printList(struct Node* head) {
    
    while (head != NULL) {
        printf("%d ", head->data); 
        head = head->next; 
    }
}
int main()
{
     struct Node* head = NULL;
    int n, i, broj;
   

    printf("Vnesi broj na elementi: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Vnesi broj  za element %d: ", i + 1);
        scanf("%d", &broj);
        vnesi(&head, broj);
    }
    printf("Listata: ");
    printList(head);
    printf("\n");
    printf("Listata vo opagjacki redosled: ");
    sortOpagjanje(&head);
    printList(head);
    printf("\n");
    printf("Listata vo rastecki redosled: ");
    sortRastenje(&head);
    printList(head);
    return 0;
}