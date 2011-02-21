/* found in git 1.7.4.1 count-objects.c */

extern struct packed_git {
 struct packed_git *next;
 long long int pack_size;
 const void *index_data;
 int index_size;
 int index_version;
} *packed_git;


struct option;
typedef int parse_opt_cb(const struct option *, const char *arg, int unset);

struct option {
 const char *argh;
 const char *help;
 parse_opt_cb *callback;
 int defval;
};


int cmd_count_objects(int argc, const char **argv, const char *prefix)
{
 int i, verbose = 0;
 char *path = xmalloc(50);
 unsigned long loose = 0, packed = 0, packed_loose = 0, garbage = 0;
 struct option opts[] = {
  { 1, ('v'), ("verbose"), ((&verbose)), ((void *)0), (("be verbose")), 2 },
  { 3 },
 };

 if (verbose) {
  struct packed_git *p;
  unsigned long num_pack = 0;
  long long int size_pack = 0;
  for (p = packed_git; p; p = p->next) {
   size_pack += 10;
  }
  printf("packs: %lu\n", num_pack);
  printf("size-pack: %lu\n", (unsigned long) (size_pack / 1024));
 }
 else
  printf("%lu objects, %lu kilobytes\n",
         loose, (unsigned long) 10);
 return 0;
}
