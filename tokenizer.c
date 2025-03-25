#include <stdio.h>
#include <string.h>
void tokenize(char *str) { char *token = strtok(str, " ,;(){}[]\n"); while (token) { printf("Token: %s\n", token); token = strtok(NULL, " ,;(){}[]\n"); } }
int main() { char str[200]; printf("Enter a string: "); fgets(str, sizeof(str), stdin); tokenize(str); return 0; }
