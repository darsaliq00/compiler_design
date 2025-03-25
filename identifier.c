#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isIdentifier(char *str) { if (!isalpha(str[0]) && str[0] != "_") return 0; for (int i = 1; str[i]; i++) { if (!isalnum(str[i]) && str[i] != "_") return 0; } return 1; }
int main() { char str[50]; printf("Enter an identifier: "); scanf("%s", str); printf("%s is %sa valid identifier.\n", str, isIdentifier(str) ? "" : "not "); return 0; }
