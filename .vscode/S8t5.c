#include <stdio.h>
void strmcopy(char *s, char *t, int m) {
    t += m - 1;
    while (*t != '\0') {
        *s = *t;
        s++; 
        t++;
    }
    *s = '\0';
}
int main() {
    char t[100], s[100];
    int m;
    gets(t);
    scanf("%d", &m);
    strmcopy(s, t, m);
    puts(s);
    return 0;
}