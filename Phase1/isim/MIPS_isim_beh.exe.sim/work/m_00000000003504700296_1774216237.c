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
static const char *ng0 = "D:/University/CAD/cad/Phase1/mem.v";
static int ng1[] = {4, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Cont_34_0(char *t0)
{
    char t5[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1356);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1356);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1356);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 944U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng1)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_divide(t14, 32, t13, 32, t12, 32);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t14, 32, 2);
    t15 = (t0 + 2508);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 8);
    xsi_driver_vfirst_trans(t15, 0, 31);
    t20 = (t0 + 2456);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Initial_38_1(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1448);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = (t0 + 264);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t3, 32, t5, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB6:    xsi_set_current_line(40, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1356);
    t16 = (t0 + 1356);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1356);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1448);
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
    t1 = (t0 + 1448);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_46_2(char *t0)
{
    char t14[8];
    char t17[8];
    char t31[8];
    char t35[8];
    char t43[8];
    char t83[8];
    char t84[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    unsigned int t95;
    int t96;
    char *t97;
    unsigned int t98;
    int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    int t103;
    int t104;

LAB0:    t1 = (t0 + 2260U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2464);
    *((int *)t2) = 1;
    t3 = (t0 + 2288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 852U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t11 = (t0 + 944U);
    t12 = *((char **)t11);
    t11 = (t0 + 264);
    t13 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t12 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB10:    t15 = (t13 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t12) < *((unsigned int *)t13))
        goto LAB12;

LAB13:    memset(t17, 0, 8);
    t18 = (t14 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t18) != 0)
        goto LAB17;

LAB18:    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB19;

LAB20:    memcpy(t43, t17, 8);

LAB21:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB8;

LAB11:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB15:    *((unsigned int *)t17) = 1;
    goto LAB18;

LAB17:    t24 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB18;

LAB19:    t29 = (t0 + 944U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB23;

LAB22:    t33 = (t29 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t30) < *((unsigned int *)t29))
        goto LAB25;

LAB24:    *((unsigned int *)t31) = 1;

LAB25:    memset(t35, 0, 8);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t36) != 0)
        goto LAB29;

LAB30:    t44 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t17 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB21;

LAB23:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t35) = 1;
    goto LAB30;

LAB29:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB30;

LAB31:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t17 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t17);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB33;

LAB34:    xsi_set_current_line(48, ng0);

LAB37:    xsi_set_current_line(49, ng0);
    t81 = (t0 + 1036U);
    t82 = *((char **)t81);
    t81 = (t0 + 1356);
    t85 = (t0 + 1356);
    t86 = (t85 + 44U);
    t87 = *((char **)t86);
    t88 = (t0 + 1356);
    t89 = (t88 + 40U);
    t90 = *((char **)t89);
    t91 = (t0 + 944U);
    t92 = *((char **)t91);
    t91 = ((char*)((ng1)));
    memset(t93, 0, 8);
    xsi_vlog_unsigned_divide(t93, 32, t92, 32, t91, 32);
    xsi_vlog_generic_convert_array_indices(t83, t84, t87, t90, 2, 1, t93, 32, 2);
    t94 = (t83 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (!(t95));
    t97 = (t84 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (!(t98));
    t100 = (t96 && t99);
    if (t100 == 1)
        goto LAB38;

LAB39:    goto LAB36;

LAB38:    t101 = *((unsigned int *)t83);
    t102 = *((unsigned int *)t84);
    t103 = (t101 - t102);
    t104 = (t103 + 1);
    xsi_vlogvar_wait_assign_value(t81, t82, 0, *((unsigned int *)t84), t104, 0LL);
    goto LAB39;

}


extern void work_m_00000000003504700296_1774216237_init()
{
	static char *pe[] = {(void *)Cont_34_0,(void *)Initial_38_1,(void *)Always_46_2};
	xsi_register_didat("work_m_00000000003504700296_1774216237", "isim/MIPS_isim_beh.exe.sim/work/m_00000000003504700296_1774216237.didat");
	xsi_register_executes(pe);
}
