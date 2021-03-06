/* Copyright (c) 2010, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */
#ifndef __ARCH_ARM_MACH_MSM_GPIOMUX_8X60_H
#define __ARCH_ARM_MACH_MSM_GPIOMUX_8X60_H

void __init msm8x60_init_gpiomux(struct msm_gpiomux_configs *cfgs);
#ifdef CONFIG_SAMSUNG_LPM_MODE
#if defined(CONFIG_TARGET_LOCALE_KOR_SKT) || defined(CONFIG_TARGET_LOCALE_KOR_LGU) || defined (CONFIG_TARGET_LOCALE_USA_ATT) || defined (CONFIG_TARGET_LOCALE_JPN_NTT) || defined(CONFIG_TARGET_LOCALE_EUR_OPEN)
void __init msm8x60_init_gpiomux_cfg_for_lpm(struct msm_gpiomux_configs *cfgs);
#endif
#endif

extern struct msm_gpiomux_configs msm8x60_qrdc_gpiomux_cfgs[] __initdata;
extern struct msm_gpiomux_configs msm8x60_surf_ffa_gpiomux_cfgs[] __initdata;
extern struct msm_gpiomux_configs msm8x60_fluid_gpiomux_cfgs[] __initdata;
extern struct msm_gpiomux_configs msm8x60_charm_gpiomux_cfgs[] __initdata;
extern struct msm_gpiomux_configs msm8x60_qt_gpiomux_cfgs[] __initdata;
extern struct msm_gpiomux_configs msm8x60_p5_lte_gpiomux_cfgs[] __initdata;
extern struct msm_gpiomux_configs msm8x60_p8_lte_gpiomux_cfgs[] __initdata;
extern struct msm_gpiomux_configs msm8x60_p4_lte_gpiomux_cfgs[] __initdata;
#endif
