#include <stdio.h>

#include "jvstring.h"

int main() {
	jvstring str = jvstring_make("This has 20 chars :)");

	printf("String: %s\nLen: %zu\n", str, jvstring_len(str));

	jvstring_free(str);

	return 0;
}
