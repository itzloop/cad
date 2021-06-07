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
static unsigned int ng2[] = {5U, 0U};
static unsigned int ng3[] = {32U, 0U};
static unsigned int ng4[] = {34U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {36U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {38U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {10U, 0U};
static unsigned int ng18[] = {15U, 0U};
static unsigned int ng19[] = {4095U, 4095U};



static void Always_14_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 2192);
    *((int *)t2) = 1;
    t3 = (t0 + 2024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng19)));
    t4 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB23:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1288);
    t4 = (t2 + 36U);
    t7 = *((char **)t4);
    t8 = (t0 + 1012);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    t9 = (t0 + 920);
    xsi_vlogvar_assign_value(t9, t7, 1, 0, 1);
    t10 = (t0 + 1104);
    xsi_vlogvar_assign_value(t10, t7, 2, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(17, ng0);

LAB24:    xsi_set_current_line(18, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);

LAB25:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB23;

LAB9:    xsi_set_current_line(28, ng0);

LAB37:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng13)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(33, ng0);

LAB38:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng13)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(38, ng0);

LAB39:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng13)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(43, ng0);

LAB40:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng13)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(48, ng0);

LAB41:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng13)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB19:    xsi_set_current_line(53, ng0);

LAB42:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng13)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng16)));
    t4 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 4, 0LL);
    goto LAB23;

LAB26:    xsi_set_current_line(21, ng0);
    t4 = ((char*)((ng1)));
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 4, 0LL);
    goto LAB36;

LAB28:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng5)));
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 4, 0LL);
    goto LAB36;

LAB30:    xsi_set_current_line(23, ng0);
    t4 = ((char*)((ng7)));
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 4, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(24, ng0);
    t4 = ((char*)((ng9)));
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 4, 0LL);
    goto LAB36;

LAB34:    xsi_set_current_line(25, ng0);
    t4 = ((char*)((ng11)));
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 4, 0LL);
    goto LAB36;

}


extern void work_m_00000000000057132090_3551811461_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000000057132090_3551811461", "isim/ControlUnit_TB_isim_beh.exe.sim/work/m_00000000000057132090_3551811461.didat");
	xsi_register_executes(pe);
}
