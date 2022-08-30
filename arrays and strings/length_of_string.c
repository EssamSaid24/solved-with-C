#include <stdio.h>
int main() {
    char s[] = "Essam Said Al-Sayed Shalaby";
    int i;
    for (i = 0; s[i] != '\0'; ++i);
    printf("Length of the string: %d", i);
}
