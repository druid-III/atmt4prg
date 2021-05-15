#include "pro_sys.h"

/* mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm */
int main (int argc, char *argv[])                        /* Главная программа */
/* mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm */
{
  struct AFst  o_AFst;
  struct AFst *po_AFst = &o_AFst;

  float a_arg[CONST];
  float a_grad[CONST];

  /* -------------------------------------------------------------------- CL \/ */
  if(!fn_go(argc, &(*argv)))      /* ! обрабатываем командную, ставим флаги ! */
    {
      perror("cl error\n");
    }
  /* -------------------------------------------------------------------- CL /\ */

  fn_allIni(po_AFst, CONST, a_arg, a_grad);

  fn_atmtRun(po_AFst, DEFAULT_STAGE);

  return (EXIT_SUCCESS);
}

