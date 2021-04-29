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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Sina/Documents/ISE Projects/HW02/Ripple_Adder_Data_Flow_Test.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {16, 0};
static int ng4[] = {2, 0};
static int ng5[] = {1, 0};
static int ng6[] = {3, 0};



static void Initial_47_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t27[8];
    char t36[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    int t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    int t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    int t52;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);

LAB4:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB1:    return;
LAB6:    xsi_set_current_line(59, ng0);

LAB8:    xsi_set_current_line(60, ng0);
    xsi_set_current_line(60, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB9:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB10:    xsi_set_current_line(60, ng0);

LAB12:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB13:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB9;

LAB14:    xsi_set_current_line(61, ng0);

LAB16:    xsi_set_current_line(62, ng0);
    t13 = (t0 + 3136);
    xsi_process_wait(t13, 10000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(62, ng0);
    t14 = (t0 + 2088);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 1608);
    t19 = (t0 + 1608);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    if (t25 == 1)
        goto LAB18;

LAB19:    t26 = (t0 + 1608);
    t28 = (t0 + 1608);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t27, t30, 2, t31, 32, 1);
    t32 = (t27 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    if (t34 == 1)
        goto LAB20;

LAB21:    t35 = (t0 + 1608);
    t37 = (t0 + 1608);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t36, t39, 2, t40, 32, 1);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    if (t43 == 1)
        goto LAB22;

LAB23:    t44 = (t0 + 1608);
    t46 = (t0 + 1608);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t45, t48, 2, t49, 32, 1);
    t50 = (t45 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (!(t51));
    if (t52 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    t7 = (t0 + 1768);
    t13 = (t7 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t6, t14, 2, t15, 32, 1);
    t16 = (t6 + 4);
    t8 = *((unsigned int *)t16);
    t25 = (!(t8));
    if (t25 == 1)
        goto LAB26;

LAB27:    t17 = (t0 + 1768);
    t19 = (t0 + 1768);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t22, 32, 1);
    t23 = (t18 + 4);
    t9 = *((unsigned int *)t23);
    t34 = (!(t9));
    if (t34 == 1)
        goto LAB28;

LAB29:    t26 = (t0 + 1768);
    t28 = (t0 + 1768);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t27, t30, 2, t31, 32, 1);
    t32 = (t27 + 4);
    t10 = *((unsigned int *)t32);
    t43 = (!(t10));
    if (t43 == 1)
        goto LAB30;

LAB31:    t35 = (t0 + 1768);
    t37 = (t0 + 1768);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t36, t39, 2, t40, 32, 1);
    t41 = (t36 + 4);
    t11 = *((unsigned int *)t41);
    t52 = (!(t11));
    if (t52 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB13;

LAB18:    xsi_vlogvar_assign_value(t17, t16, 0, *((unsigned int *)t18), 1);
    goto LAB19;

LAB20:    xsi_vlogvar_assign_value(t26, t16, 1, *((unsigned int *)t27), 1);
    goto LAB21;

LAB22:    xsi_vlogvar_assign_value(t35, t16, 2, *((unsigned int *)t36), 1);
    goto LAB23;

LAB24:    xsi_vlogvar_assign_value(t44, t16, 3, *((unsigned int *)t45), 1);
    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t6), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t17, t4, 1, *((unsigned int *)t18), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t26, t4, 2, *((unsigned int *)t27), 1);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t35, t4, 3, *((unsigned int *)t36), 1);
    goto LAB33;

}


extern void work_m_00000000000447443023_0314770948_init()
{
	static char *pe[] = {(void *)Initial_47_0};
	xsi_register_didat("work_m_00000000000447443023_0314770948", "isim/Ripple_Adder_Data_Flow_Test_isim_beh.exe.sim/work/m_00000000000447443023_0314770948.didat");
	xsi_register_executes(pe);
}
