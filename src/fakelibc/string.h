#include <stddef.h>

// TODO
#define strlen(what) 1



#define strcmp(S1, S2) 0
#define strncmp(S1, S2, N) 0

void *memcpy(void *dest, const void * src, unsigned long n);

int memcmp(const void *str1, const void *str2, unsigned long n);
void * memset ( void * ptr, int value, unsigned long num );

void free(void *ptr);
void* malloc (unsigned long size);
void *calloc(size_t nitems, size_t size);
void* realloc (void* ptr, unsigned long size);
void *memchr(const void *src, int c, size_t n);
char * strchr ( const char * str, int character );
char * strrchr ( const char * str, int character );
int rand(void);
int remove(const char *filename);
char *strcpy(char *restrict dest, const char *restrict src);
char *tmpnam(char *str);

#define FILENAME_MAX 4096