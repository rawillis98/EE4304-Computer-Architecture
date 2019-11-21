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
static const char *ng0 = "/home/eng/r/raw160130/EE4304-Computer-Architecture/Lab-2/sll.v";



static void Cont_10_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    t2 = (t0 + 472);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_arith_lshift(t5, 32, t3, 32, t4, 32);
    t2 = (t0 + 3168);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 3088);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_10615885622342030321_3653067144_init()
{
	static char *pe[] = {(void *)Cont_10_0};
	xsi_register_didat("work_m_10615885622342030321_3653067144", "isim/TopLevel_tb_isim_beh.exe.sim/work/m_10615885622342030321_3653067144.didat");
	xsi_register_executes(pe);
}
