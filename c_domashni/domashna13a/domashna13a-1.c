/*1.	Напиши функција pecatiListaNanazad која рекурзивно ги печати елементите од листа наназад. 
Елементите на листата се состојат од едно целоборјно поле broj и еден карактер кој се вика karakter.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int broj;
    char karakter;
    struct Node* next;
} Node;

void insert(Node** head, int broj, char karakter) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->broj = broj;
    new_node->karakter = karakter;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
}


void pecatiListaNanazad(Node* node) {
    if (node == NULL) {
        return;
    }

    pecatiListaNanazad(node->next);
    printf("%d%c ", node->broj, node->karakter);
}

int main() {
    Node* head = NULL;
    int n, i, broj;
    char karakter;

    printf("Vnesi broj na elementi: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Vnesi broj i karakter za element %d: ", i + 1);
        scanf("%d %c", &broj, &karakter);
        insert(&head, broj, karakter);
    }

    printf("Elementite od listata vo obraten redosled se:\n");
    pecatiListaNanazad(head);

    return 0;
}
