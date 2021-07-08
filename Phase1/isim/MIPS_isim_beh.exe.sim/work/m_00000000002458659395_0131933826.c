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
static const char *ng0 = "D:/University/CAD/cad/Phase1/RegistersFile.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Cont_33_0(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1472);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1472);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 784U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2776);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2716);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1472);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1472);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 876U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2812);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2724);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_37_2(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1564);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB6:    xsi_set_current_line(40, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1472);
    t16 = (t0 + 1472);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1472);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1564);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1564);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1564);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB8;

}

static void Always_44_3(char *t0)
{
    char t6[8];
    char t7[8];
    char t42[8];
    char t48[8];
    char t84[8];
    char t85[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    int t99;
    int t100;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2732);
    *((int *)t2) = 1;
    t3 = (t0 + 2548);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1472);
    t8 = (t0 + 1472);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 1472);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t19 = (~(t16));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t19);
    t26 = (t23 & 1U);
    if (t26 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t2) != 0)
        goto LAB10;

LAB11:    t5 = (t6 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t5);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB12;

LAB13:    memcpy(t48, t6, 8);

LAB14:    t76 = (t48 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t48);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB2;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB11;

LAB10:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB12:    t8 = (t0 + 968U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t10 = (t9 + 4);
    t11 = (t8 + 4);
    t30 = *((unsigned int *)t9);
    t31 = *((unsigned int *)t8);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t11);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t11);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB16;

LAB15:    if (t39 != 0)
        goto LAB17;

LAB18:    memset(t42, 0, 8);
    t13 = (t7 + 4);
    t43 = *((unsigned int *)t13);
    t44 = (~(t43));
    t45 = *((unsigned int *)t7);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB22:    t49 = *((unsigned int *)t6);
    t50 = *((unsigned int *)t42);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t15 = (t6 + 4);
    t18 = (t42 + 4);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t15);
    t54 = *((unsigned int *)t18);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB16:    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB17:    t12 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t42) = 1;
    goto LAB22;

LAB21:    t14 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB23:    t58 = *((unsigned int *)t48);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t48) = (t58 | t59);
    t60 = (t6 + 4);
    t61 = (t42 + 4);
    t62 = *((unsigned int *)t6);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t42);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t17 = (t63 & t65);
    t20 = (t67 & t69);
    t70 = (~(t17));
    t71 = (~(t20));
    t72 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t72 & t70);
    t73 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t73 & t71);
    t74 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t74 & t70);
    t75 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t75 & t71);
    goto LAB25;

LAB26:    xsi_set_current_line(47, ng0);
    t82 = (t0 + 1060U);
    t83 = *((char **)t82);
    t82 = (t0 + 1472);
    t86 = (t0 + 1472);
    t87 = (t86 + 44U);
    t88 = *((char **)t87);
    t89 = (t0 + 1472);
    t90 = (t89 + 40U);
    t91 = *((char **)t90);
    t92 = (t0 + 968U);
    t93 = *((char **)t92);
    xsi_vlog_generic_convert_array_indices(t84, t85, t88, t91, 2, 1, t93, 5, 2);
    t92 = (t84 + 4);
    t94 = *((unsigned int *)t92);
    t21 = (!(t94));
    t95 = (t85 + 4);
    t96 = *((unsigned int *)t95);
    t24 = (!(t96));
    t25 = (t21 && t24);
    if (t25 == 1)
        goto LAB29;

LAB30:    goto LAB28;

LAB29:    t97 = *((unsigned int *)t84);
    t98 = *((unsigned int *)t85);
    t99 = (t97 - t98);
    t100 = (t99 + 1);
    xsi_vlogvar_assign_value(t82, t83, 0, *((unsigned int *)t85), t100);
    goto LAB30;

}


extern void work_m_00000000002458659395_0131933826_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Initial_37_2,(void *)Always_44_3};
	xsi_register_didat("work_m_00000000002458659395_0131933826", "isim/MIPS_isim_beh.exe.sim/work/m_00000000002458659395_0131933826.didat");
	xsi_register_executes(pe);
}
