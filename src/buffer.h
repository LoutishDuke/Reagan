#include <stdlib.h>
#include <string.h>


//setup the append_buf structure if undefined.
#ifndef RGUF_INIT
typedef struct {
    char * buffer;
    int len;
} append_buf;
#define RGUF_INIT{NULL,0}
#endif

void 
rg_append(append_buf*, const char*, const int);

void 
rg_free(append_buf*);