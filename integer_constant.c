#include <stdio.h>
#include <ctype.h>
int isIntegerConstant(char *str) { if (*str == "+" || *str == "-") str++; if (!*str) return 0; while (*str) { if (!isdigit(*str)) return 0; str++; } return 1; }
int main() { char str[50]; printf("Enter a number: "); scanf("%s", str); printf("%s is %sa valid integer constant.\n", str, isIntegerConstant(str) ? "" : "not "); return 0; }
