#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// tortoisegit
// github...
//

typedef {
  size_t len, size;
  char ** t;  // Table itself.
} hashtable_t;

hashtable_t * new_hashtable(size_t size) {
  hashtable_t * ht = (hashtable_t *) malloc(sizeof(hashtable_t));
  ht->size = size;
  ht->len = 0;
  ht->t = (char **) malloc(size*sizeof(char *));

  return ht;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
