#include "buffer.h"

void 
rg_append(append_buf * rg, const char* st, const int len){
    char *new = realloc(rg->buffer,((unsigned long) rg->len + (unsigned long) len)*sizeof(char));
    if (new == NULL) {
        return;
    }
    memcpy(&new[rg->len], st, len);
    rg->buffer = new;
    rg->len += len;
}

void
rg_free(append_buf* rg){
    free(rg->buffer);
}