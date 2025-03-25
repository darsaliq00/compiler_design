#include <stdio.h>
#include <string.h>
const char *keywords[] = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long", "register", "restrict", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
int isKeyword(char *word) { for (int i = 0; i < 32; i++) { if (strcmp(word, keywords[i]) == 0) return 1; } return 0; }
int main() { char word[50]; printf("Enter a word: "); scanf("%s", word); printf("%s is %sa keyword.\n", word, isKeyword(word) ? "" : "not "); return 0; }
