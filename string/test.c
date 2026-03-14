#include <stdio.h>

#include "jvstring.h"

int main() {
    jvstring str = jvstring_make("This has 20 chars :)");

    printf("String: %s\nLen: %zu\n", str, jvstring_len(str));

    jvstring_free(str);

    jvstring s1  = jvstring_make("Hello");
    jvstring s2  = jvstring_make(" world!");
    jvstring s12 = jvstring_cat(s1, s2);

    printf("Concatenated string: %s\n", s12);

    return 0;
}
