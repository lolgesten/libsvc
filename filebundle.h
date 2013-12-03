struct filebundle_entry {
  const char *filename;
  const unsigned char *data;
  int size;
  int original_size;
};

struct filebundle {
  struct filebundle *next;
  const struct filebundle_entry *entries;
  const char *prefix;
};

int filebundle_get(const char *p, const void **ptr, int *len);
