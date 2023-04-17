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
static const char *ng0 = "C:/Users/Student/Desktop/Projekt_DJK/ImageProcessing/effects.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {255, 0};
static unsigned int ng5[] = {255U, 0U};
static int ng6[] = {7, 0};
static int ng7[] = {15, 0};
static int ng8[] = {8, 0};
static int ng9[] = {23, 0};
static int ng10[] = {16, 0};
static unsigned int ng11[] = {2U, 0U};
static unsigned int ng12[] = {3U, 0U};
static int ng13[] = {1, 0};
static int ng14[] = {2, 0};
static unsigned int ng15[] = {16777215U, 16777215U};
static int ng16[] = {899, 0};



static void Cont_38_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2640U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 8824);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 8648);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_39_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2640U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 8888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 8664);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_40_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2640U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 16);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 8952);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 8680);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_43_3(char *t0)
{
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

LAB0:    t1 = (t0 + 7584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 8696);
    *((int *)t2) = 1;
    t3 = (t0 + 7616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4640);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 10, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_59_4(char *t0)
{
    char t17[8];
    char t19[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    int t16;
    char *t18;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 7832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 8712);
    *((int *)t2) = 1;
    t3 = (t0 + 7864);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 4640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4480);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 10);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4800);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 10);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5120);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 10);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4320);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t5, 1);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(73, ng0);

LAB12:    xsi_set_current_line(75, ng0);
    t6 = (t0 + 2320U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(81, ng0);

LAB17:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB15:    goto LAB11;

LAB9:    xsi_set_current_line(87, ng0);

LAB18:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 2480U);
    t5 = *((char **)t3);

LAB19:    t3 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t16 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);

LAB30:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng16)));
    memset(t17, 0, 8);
    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t14);
    t13 = *((unsigned int *)t15);
    t28 = (t12 ^ t13);
    t30 = (t11 | t28);
    t33 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t15);
    t38 = (t33 | t36);
    t39 = (~(t38));
    t42 = (t30 & t39);
    if (t42 != 0)
        goto LAB80;

LAB77:    if (t38 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t17) = 1;

LAB80:    t22 = (t17 + 4);
    t43 = *((unsigned int *)t22);
    t44 = (~(t43));
    t45 = *((unsigned int *)t17);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(131, ng0);

LAB85:    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng13)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t6, 10, t7, 32);
    t14 = (t0 + 4480);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 10);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng13)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t6, 10, t7, 32);
    t14 = (t0 + 4800);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 10);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng13)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t6, 10, t7, 32);
    t14 = (t0 + 5120);
    xsi_vlogvar_assign_value(t14, t17, 0, 0, 10);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB83:    goto LAB11;

LAB13:    xsi_set_current_line(75, ng0);

LAB16:    xsi_set_current_line(76, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 4320);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB20:    xsi_set_current_line(90, ng0);

LAB31:    xsi_set_current_line(91, ng0);
    t6 = (t0 + 2640U);
    t7 = *((char **)t6);
    t6 = (t0 + 3840);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 24);
    goto LAB30;

LAB22:    xsi_set_current_line(94, ng0);

LAB32:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 3280U);
    t6 = *((char **)t3);
    t3 = (t0 + 472);
    t7 = *((char **)t3);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t6, 8, t7, 32);
    t3 = (t0 + 5760);
    xsi_vlogvar_assign_value(t3, t17, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3440U);
    t3 = *((char **)t2);
    t2 = (t0 + 472);
    t6 = *((char **)t2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t3, 8, t6, 32);
    t2 = (t0 + 5920);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = (t0 + 472);
    t6 = *((char **)t2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t3, 8, t6, 32);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 32);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_greater(t17, 32, t6, 32, t7, 32);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t17);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3840);
    t14 = (t0 + 3840);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t22 = ((char*)((ng6)));
    t23 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t17, t19, t20, ((int*)(t18)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t17 + 4);
    t9 = *((unsigned int *)t24);
    t8 = (!(t9));
    t25 = (t19 + 4);
    t10 = *((unsigned int *)t25);
    t16 = (!(t10));
    t31 = (t8 && t16);
    t26 = (t20 + 4);
    t11 = *((unsigned int *)t26);
    t34 = (!(t11));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB38;

LAB39:
LAB35:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_greater(t17, 32, t6, 32, t7, 32);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t17);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3840);
    t14 = (t0 + 3840);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t22 = ((char*)((ng7)));
    t23 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t17, t19, t20, ((int*)(t18)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t17 + 4);
    t9 = *((unsigned int *)t24);
    t8 = (!(t9));
    t25 = (t19 + 4);
    t10 = *((unsigned int *)t25);
    t16 = (!(t10));
    t31 = (t8 && t16);
    t26 = (t20 + 4);
    t11 = *((unsigned int *)t26);
    t34 = (!(t11));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB45;

LAB46:
LAB42:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_greater(t17, 32, t6, 32, t7, 32);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t17);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3840);
    t14 = (t0 + 3840);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t22 = ((char*)((ng9)));
    t23 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t17, t19, t20, ((int*)(t18)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t17 + 4);
    t9 = *((unsigned int *)t24);
    t8 = (!(t9));
    t25 = (t19 + 4);
    t10 = *((unsigned int *)t25);
    t16 = (!(t10));
    t31 = (t8 && t16);
    t26 = (t20 + 4);
    t11 = *((unsigned int *)t26);
    t34 = (!(t11));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB52;

LAB53:
LAB49:    goto LAB30;

LAB24:    xsi_set_current_line(106, ng0);

LAB54:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 3280U);
    t6 = *((char **)t3);
    t3 = (t0 + 472);
    t7 = *((char **)t3);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t6, 8, t7, 32);
    t3 = (t0 + 5760);
    xsi_vlogvar_assign_value(t3, t17, 0, 0, 32);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3440U);
    t3 = *((char **)t2);
    t2 = (t0 + 472);
    t6 = *((char **)t2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t3, 8, t6, 32);
    t2 = (t0 + 5920);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 32);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = (t0 + 472);
    t6 = *((char **)t2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t3, 8, t6, 32);
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t17, 0, 0, 32);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t6, 32, t7, 32);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t17);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3840);
    t14 = (t0 + 3840);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t22 = ((char*)((ng6)));
    t23 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t17, t19, t20, ((int*)(t18)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t17 + 4);
    t9 = *((unsigned int *)t24);
    t8 = (!(t9));
    t25 = (t19 + 4);
    t10 = *((unsigned int *)t25);
    t16 = (!(t10));
    t31 = (t8 && t16);
    t26 = (t20 + 4);
    t11 = *((unsigned int *)t26);
    t34 = (!(t11));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB60;

LAB61:
LAB57:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t6, 32, t7, 32);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t17);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3840);
    t14 = (t0 + 3840);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t22 = ((char*)((ng7)));
    t23 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t17, t19, t20, ((int*)(t18)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t17 + 4);
    t9 = *((unsigned int *)t24);
    t8 = (!(t9));
    t25 = (t19 + 4);
    t10 = *((unsigned int *)t25);
    t16 = (!(t10));
    t31 = (t8 && t16);
    t26 = (t20 + 4);
    t11 = *((unsigned int *)t26);
    t34 = (!(t11));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB67;

LAB68:
LAB64:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t6, 32, t7, 32);
    t14 = (t17 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t17);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 3840);
    t14 = (t0 + 3840);
    t15 = (t14 + 72U);
    t18 = *((char **)t15);
    t22 = ((char*)((ng9)));
    t23 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t17, t19, t20, ((int*)(t18)), 2, t22, 32, 1, t23, 32, 1);
    t24 = (t17 + 4);
    t9 = *((unsigned int *)t24);
    t8 = (!(t9));
    t25 = (t19 + 4);
    t10 = *((unsigned int *)t25);
    t16 = (!(t10));
    t31 = (t8 && t16);
    t26 = (t20 + 4);
    t11 = *((unsigned int *)t26);
    t34 = (!(t11));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB74;

LAB75:
LAB71:    goto LAB30;

LAB26:    xsi_set_current_line(118, ng0);

LAB76:    xsi_set_current_line(119, ng0);
    t3 = (t0 + 3120U);
    t6 = *((char **)t3);
    t3 = (t0 + 3440U);
    t7 = *((char **)t3);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t6, 8, t7, 8);
    t3 = (t0 + 3280U);
    t14 = *((char **)t3);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t17, 32, t14, 8);
    t3 = ((char*)((ng13)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t19, 32, t3, 32);
    t15 = ((char*)((ng14)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_rshift(t21, 32, t20, 32, t15, 32);
    t18 = (t0 + 5440);
    xsi_vlogvar_assign_value(t18, t21, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t14 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t13 & 255U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 255U);
    t15 = (t0 + 5440);
    t18 = (t15 + 56U);
    t22 = *((char **)t18);
    memset(t20, 0, 8);
    t23 = (t20 + 4);
    t24 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t33 = (t30 >> 0);
    *((unsigned int *)t20) = t33;
    t36 = *((unsigned int *)t24);
    t38 = (t36 >> 0);
    *((unsigned int *)t23) = t38;
    t39 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t39 & 255U);
    t42 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t42 & 255U);
    t25 = (t0 + 5440);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t21, 0, 8);
    t29 = (t21 + 4);
    t32 = (t27 + 4);
    t43 = *((unsigned int *)t27);
    t44 = (t43 >> 0);
    *((unsigned int *)t21) = t44;
    t45 = *((unsigned int *)t32);
    t46 = (t45 >> 0);
    *((unsigned int *)t29) = t46;
    t47 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t47 & 255U);
    t48 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t48 & 255U);
    xsi_vlogtype_concat(t17, 24, 24, 3U, t21, 8, t20, 8, t19, 8);
    t49 = (t0 + 3840);
    xsi_vlogvar_assign_value(t49, t17, 0, 0, 24);
    goto LAB30;

LAB33:    xsi_set_current_line(98, ng0);
    t15 = ((char*)((ng5)));
    t18 = (t0 + 3840);
    t22 = (t0 + 3840);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng6)));
    t26 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t8 = (!(t28));
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t29);
    t16 = (!(t30));
    t31 = (t8 && t16);
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB36;

LAB37:    goto LAB35;

LAB36:    t36 = *((unsigned int *)t21);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t20);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t18, t15, t37, *((unsigned int *)t20), t41);
    goto LAB37;

LAB38:    t12 = *((unsigned int *)t20);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t19);
    t40 = (t13 - t28);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t7, t6, t37, *((unsigned int *)t19), t41);
    goto LAB39;

LAB40:    xsi_set_current_line(100, ng0);
    t15 = ((char*)((ng5)));
    t18 = (t0 + 3840);
    t22 = (t0 + 3840);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng7)));
    t26 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t8 = (!(t28));
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t29);
    t16 = (!(t30));
    t31 = (t8 && t16);
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB43;

LAB44:    goto LAB42;

LAB43:    t36 = *((unsigned int *)t21);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t20);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t18, t15, t37, *((unsigned int *)t20), t41);
    goto LAB44;

LAB45:    t12 = *((unsigned int *)t20);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t19);
    t40 = (t13 - t28);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t7, t6, t37, *((unsigned int *)t19), t41);
    goto LAB46;

LAB47:    xsi_set_current_line(102, ng0);
    t15 = ((char*)((ng5)));
    t18 = (t0 + 3840);
    t22 = (t0 + 3840);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng9)));
    t26 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t8 = (!(t28));
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t29);
    t16 = (!(t30));
    t31 = (t8 && t16);
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB50;

LAB51:    goto LAB49;

LAB50:    t36 = *((unsigned int *)t21);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t20);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t18, t15, t37, *((unsigned int *)t20), t41);
    goto LAB51;

LAB52:    t12 = *((unsigned int *)t20);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t19);
    t40 = (t13 - t28);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t7, t6, t37, *((unsigned int *)t19), t41);
    goto LAB53;

LAB55:    xsi_set_current_line(110, ng0);
    t15 = ((char*)((ng2)));
    t18 = (t0 + 3840);
    t22 = (t0 + 3840);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng6)));
    t26 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t8 = (!(t28));
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t29);
    t16 = (!(t30));
    t31 = (t8 && t16);
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB58;

LAB59:    goto LAB57;

LAB58:    t36 = *((unsigned int *)t21);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t20);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t18, t15, t37, *((unsigned int *)t20), t41);
    goto LAB59;

LAB60:    t12 = *((unsigned int *)t20);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t19);
    t40 = (t13 - t28);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t7, t6, t37, *((unsigned int *)t19), t41);
    goto LAB61;

LAB62:    xsi_set_current_line(112, ng0);
    t15 = ((char*)((ng2)));
    t18 = (t0 + 3840);
    t22 = (t0 + 3840);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng7)));
    t26 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t8 = (!(t28));
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t29);
    t16 = (!(t30));
    t31 = (t8 && t16);
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB65;

LAB66:    goto LAB64;

LAB65:    t36 = *((unsigned int *)t21);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t20);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t18, t15, t37, *((unsigned int *)t20), t41);
    goto LAB66;

LAB67:    t12 = *((unsigned int *)t20);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t19);
    t40 = (t13 - t28);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t7, t6, t37, *((unsigned int *)t19), t41);
    goto LAB68;

LAB69:    xsi_set_current_line(114, ng0);
    t15 = ((char*)((ng2)));
    t18 = (t0 + 3840);
    t22 = (t0 + 3840);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng9)));
    t26 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t19, t20, t21, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t27);
    t8 = (!(t28));
    t29 = (t20 + 4);
    t30 = *((unsigned int *)t29);
    t16 = (!(t30));
    t31 = (t8 && t16);
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB72;

LAB73:    goto LAB71;

LAB72:    t36 = *((unsigned int *)t21);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t19);
    t39 = *((unsigned int *)t20);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t18, t15, t37, *((unsigned int *)t20), t41);
    goto LAB73;

LAB74:    t12 = *((unsigned int *)t20);
    t37 = (t12 + 0);
    t13 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t19);
    t40 = (t13 - t28);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t7, t6, t37, *((unsigned int *)t19), t41);
    goto LAB75;

LAB79:    t18 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(126, ng0);

LAB84:    xsi_set_current_line(127, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 5120);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 10);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB83;

}

static void Cont_145_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 8080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t18 = (t0 + 8728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_146_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 8328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1023U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 9);
    t18 = (t0 + 8744);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002451999447_2893546528_init()
{
	static char *pe[] = {(void *)Cont_38_0,(void *)Cont_39_1,(void *)Cont_40_2,(void *)Always_43_3,(void *)Always_59_4,(void *)Cont_145_5,(void *)Cont_146_6};
	xsi_register_didat("work_m_00000000002451999447_2893546528", "isim/top_tb_isim_beh.exe.sim/work/m_00000000002451999447_2893546528.didat");
	xsi_register_executes(pe);
}
