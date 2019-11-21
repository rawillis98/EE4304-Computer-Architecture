/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/eng/r/raw160130/EE4304-Computer-Architecture/Lab-2/RegFile.v";



static void Cont_42_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2744U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2744U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = (t0 + 1664U);
    t11 = *((char **)t10);
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t11, 5, 2);
    t10 = (t0 + 4600);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 8);
    xsi_driver_vfirst_trans(t10, 0, 31);
    t16 = (t0 + 4504);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_43_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 4184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2784U);
    t3 = *((char **)t2);
    t2 = (t0 + 2744U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2744U);
    t8 = (t7 + 48U);
    t9 = *((char **)t8);
    t10 = (t0 + 1824U);
    t11 = *((char **)t10);
    xsi_vlog_generic_get_array_select_value(t4, 32, t3, t6, t9, 2, 1, t11, 5, 2);
    t10 = (t0 + 4664);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t4, 8);
    xsi_driver_vfirst_trans(t10, 0, 31);
    t16 = (t0 + 4520);
    *((int *)t16) = 1;

LAB1:    return;
}


extern void work_m_04602434857257116056_3535081231_init()
{
	static char *pe[] = {(void *)Cont_42_0,(void *)Cont_43_1};
	xsi_register_didat("work_m_04602434857257116056_3535081231", "isim/TopLevel_tb_isim_beh.exe.sim/work/m_04602434857257116056_3535081231.didat");
	xsi_register_executes(pe);
}
