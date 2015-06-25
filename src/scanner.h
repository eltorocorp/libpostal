#ifndef SCANNER_H
#define SCANNER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "token_types.h"
#include "tokens.h"

typedef struct scanner {
    unsigned char *src, *cursor, *start, *end;
} scanner_t;

uint16_t scan_token(scanner_t *s);

scanner_t scanner_from_string(const char *input, size_t len);

void tokenize_add_tokens(token_array *tokens, const char *input, size_t len);
token_array *tokenize(const char *input);


#ifdef __cplusplus
}
#endif

#endif
