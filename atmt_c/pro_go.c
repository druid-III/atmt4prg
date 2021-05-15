#include "pro_go.h"

/*============================================================================*/
int fn_go
(
  int   argc,
  char *argv[]
)
/*----------------------------------------------------------------------------*/
{
  char s_opt;
  /*GlobalGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG\/G*/
  extern bool b_cl;
  /*GlobalGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG/\G*/

  while ((s_opt = getopt (argc, argv, "rw")) != -1)
    {
      switch (s_opt)
        {
        case 'g':
          b_cl = true;
          break;

        case 'd':
          b_cl = false;
          break;

        case '?':
          printf ("\n");
          printf ("AFautomat HELP: автоматная реализация адаптивного фильтра\n");
          printf ("-g -> вариант на разновидности генетических алгоритмов;\n");
          printf ("-d -> вариант на классическом градиентном методе;\n");
          printf ("\n");
          printf ("AFautomat HELP: automaton implementation of an adaptive filter\n");
          printf ("-g -> release in the variety of genetic algorithms;\n");
          printf ("-d -> release in the classical gradient method;\n");
          printf ("\n");
        default:
          break; //abort ();
        }
    }
  return 1;
}

