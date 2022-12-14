#ifndef MAIN_H
#define MAIN_H

/**
*main - header file for protoypes
*void protoypes (void)
*char prototype (char)
*int protoypes (int)
* putchar prototype (_putchar.c)
*
*
*/
int _putchar(char c);
void _puts(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(const char *s);
void print_int(unsigned long int n);
#endif /* MAIN_H */
