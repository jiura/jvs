#ifndef JVSTRING_H
#define JVSTRING_H

#include <stdlib.h>
#include <string.h>

#define JVSTRING_HEADER(str) ((jvstring_header *)str - 1)

// To differentiate when to use each.
// Passing a regular char* into jvstring
// functions is undefined behavior.
typedef char *jvstring;

typedef struct {
	size_t len;
	size_t cap;
} jvstring_header;

jvstring_header _emptyJvstringHeader = {0};

char *jvstring_make(const char *str) {
	size_t strLen = strlen(str);

	jvstring_header *h = malloc(sizeof(*h) + (sizeof(char) * strLen + 1));

	h->len = strLen;
	h->cap = strLen;
	memcpy((char *)(h + 1), str, strLen + 1);

	return (char *)(h + 1);
}

static inline size_t jvstring_len(jvstring str) {
	return JVSTRING_HEADER(str)->len;
}

jvstring jvstring_cat(jvstring dest, jvstring src) {
	if (JVSTRING_HEADER(dest)->cap < JVSTRING_HEADER(src)->len + JVSTRING_HEADER(dest)->len) {
		dest = realloc();
	}
}

static inline void jvstring_free(jvstring str) {
	if (!str) return;
	free(JVSTRING_HEADER(str));
}

#endif
