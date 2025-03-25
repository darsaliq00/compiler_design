#include <stdio.h>
int main() { FILE *file; char filename[50]; char ch; int lines = 1; printf("Enter filename: "); scanf("%s", filename); file = fopen(filename, "r"); if (!file) { printf("Error opening file.\n"); return 1; } while ((ch = fgetc(file)) != EOF) { if (ch == "\n") lines++; } fclose(file); printf("Total lines: %d\n", lines); return 0; }
