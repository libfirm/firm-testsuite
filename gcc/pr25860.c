/* We used to ICE because PRE would try to PRE the load of *Note from the
   loop. */

struct g
{
  int i;
};
struct f
{
  struct g i;
};
int __attribute__((const, noinline)) GSM_RingNoteGetFullDuration(struct g g)
{
	(void)g;
	return 0;
}
void savewav(struct f *gg)
{
  struct g *Note;
  long i = 0,j,length=0;
  Note = &gg->i;
  for (j=0;j<GSM_RingNoteGetFullDuration(*Note);j++)
    ;
}

int main()
{
	return 0;
}
