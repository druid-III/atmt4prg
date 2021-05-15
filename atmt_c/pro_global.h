#ifndef __GLOBAL_H__
#define __GLOBAL_H__
#pragma once

/*GlobalGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG\/G*/
bool b_cl;

struct AFst
{
    /* ----------------------------------------- переменная автомата состояний -- */
    unsigned short int  usi_rSt;
    /* ----------------------------------------- Параметры градиента ------------ */
    unsigned int        ui_argNumb;
    float              *pa_TFarg;
    float              *pa_GRarg;
    /* ----------------------------------------- Параметры градиента ------------ */
    float               delta;          /* шажок-прирост в нахождения градиента */
    float (*pfn_targetF) (struct AFst *po_AFst);
    /* ----------------------------------------- Параметры целевой функции ------ */
    float              *pa_x1;                 /* вектор нижней точки интервала */
    float              *pa_x2;                /* вектор верхней точки интервала */
    float              *pa_xm;                                  /* вектор-ответ */
};
/*GlobalGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG/\G*/

#endif /* __GLOBAL_H__ */

