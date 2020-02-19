#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define HT_SUCCESS 1
#define HT_ERROR 0

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
  // FIXME: Fill ht->t with NULLs.
  return ht;
}

int delete_hashtable(hashtable_t * ht, int delete_strings) {

  if (delete_strings) {
    for (int i=0; i<ht->size; i++) {
      if (ht->t[i]!=NULL) {
        free(ht->t[i]);
      }
    }
  }

  free(ht->t);
  free(ht);

  return HT_SUCCESS;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
