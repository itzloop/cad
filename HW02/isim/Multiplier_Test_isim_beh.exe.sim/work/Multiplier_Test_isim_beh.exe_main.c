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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002126307283_4211792773_init();
    work_m_00000000001790702208_0470473811_init();
    work_m_00000000000213091624_3797130993_init();
    work_m_00000000002616526687_0527389236_init();
    work_m_00000000003626330232_1807332179_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003626330232_1807332179");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
