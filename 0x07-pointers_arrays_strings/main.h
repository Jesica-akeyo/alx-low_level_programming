#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
<<<<<<< HEAD
void print_chessboard(char (a*)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
=======
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int _putchar(char c);
>>>>>>> 47866c651cdf1bf15a66ee21993171a80c32c9ba

#endif

