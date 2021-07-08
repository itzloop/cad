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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/University/CAD/cad/Phase1/ControlUnit.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {32U, 0U};
static unsigned int ng3[] = {40U, 0U};
static unsigned int ng4[] = {34U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {36U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {38U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {6U, 0U};
static unsigned int ng13[] = {44U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {48U, 0U};
static unsigned int ng17[] = {12U, 0U};
static unsigned int ng18[] = {13U, 0U};
static unsigned int ng19[] = {14U, 0U};
static unsigned int ng20[] = {15U, 0U};
static unsigned int ng21[] = {5U, 0U};
static unsigned int ng22[] = {35U, 0U};
static unsigned int ng23[] = {50U, 0U};
static unsigned int ng24[] = {43U, 0U};
static unsigned int ng25[] = {19U, 0U};
static unsigned int ng26[] = {4095U, 4095U};



static void Always_17_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2468);
    *((int *)t2) = 1;
    t3 = (t0 + 2300);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB25:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    t10 = (t0 + 1288);
    xsi_vlogvar_assign_value(t10, t4, 1, 0, 1);
    t11 = (t0 + 1196);
    xsi_vlogvar_assign_value(t11, t4, 2, 0, 1);
    t12 = (t0 + 1012);
    xsi_vlogvar_assign_value(t12, t4, 3, 0, 1);
    t13 = (t0 + 920);
    xsi_vlogvar_assign_value(t13, t4, 4, 0, 1);
    t14 = (t0 + 1104);
    xsi_vlogvar_assign_value(t14, t4, 5, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);

LAB26:    xsi_set_current_line(21, ng0);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);

LAB27:    t7 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t8, 6, t7, 6);
    if (t9 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 6, t2, 6);
    if (t6 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB25;

LAB9:    xsi_set_current_line(53, ng0);

LAB50:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(58, ng0);

LAB51:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(63, ng0);

LAB52:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(68, ng0);

LAB53:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(73, ng0);

LAB54:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(77, ng0);

LAB55:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(81, ng0);

LAB56:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB25;

LAB28:    xsi_set_current_line(22, ng0);

LAB43:    xsi_set_current_line(23, ng0);
    t10 = ((char*)((ng1)));
    t11 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 4, 0LL);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB42;

LAB30:    xsi_set_current_line(26, ng0);

LAB44:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB42;

LAB32:    xsi_set_current_line(30, ng0);

LAB45:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB42;

LAB34:    xsi_set_current_line(34, ng0);

LAB46:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB42;

LAB36:    xsi_set_current_line(39, ng0);

LAB47:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB42;

LAB38:    xsi_set_current_line(43, ng0);

LAB48:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB42;

LAB40:    xsi_set_current_line(47, ng0);

LAB49:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB42;

}


extern void work_m_00000000003892582841_3551811461_init()
{
	static char *pe[] = {(void *)Always_17_0};
	xsi_register_didat("work_m_00000000003892582841_3551811461", "isim/MIPS_isim_beh.exe.sim/work/m_00000000003892582841_3551811461.didat");
	xsi_register_executes(pe);
}
