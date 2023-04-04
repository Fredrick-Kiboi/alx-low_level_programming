/**
 * struct list_s - this is a singly linked list
 * @str: the string
 * @len: the length of the string
 * @next: pointer to the next node
 *
 * Description: main struct in the project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
