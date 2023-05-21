#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 * 
 * @head: pointer to the head pointer
 * @str: str to add of the new node
 * 
 * Return: if successful, address of the new element 
 * else NULL
 */

list_t *add_node_end(list_t **head, const char *str){
    /* Create a new node */
    list_t *new_node = malloc(sizeof(list_t));
    int i, len;
    char *dup_str;


    if (new_node == NULL) {
        return NULL;
    }
    
    /* Duplicate string*/
    dup_str = strdup(str);
    len = 0;
    if (str == NULL) {
        free(new_node);
        return (NULL);
    }

    for (i = 0; str[i] != '\0'; i++){
        len++;
    }

    /* Set the data and next pointers of the new node*/
    new_node->str = dup_str;
    new_node->len = len;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head of the list */
    if (*head == NULL) {
        *head = new_node;
    }
    else {
        /* find last node and set its next pointer to the new node */
        list_t *current;
        current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }   

    /* Return the address of the new node */ 
    return (new_node);
}
