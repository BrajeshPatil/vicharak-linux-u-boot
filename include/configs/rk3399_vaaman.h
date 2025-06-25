/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2023 Vicharak India
 */

#ifndef __RK3399_VAAMAN_H
#define __RK3399_VAAMAN_H

#include <configs/rk3399_common.h>
#include <configs/vicharak_common_defs.h>

#define ROCKCHIP_DEVICE_SETTINGS \
		"stdin=serial,usbkbd\0" \
		"stdout=serial,vidconsole\0" \
		"stderr=serial,vidconsole\0" \
		VICHARAK_BOOT_MENU

/* Fix build error with SPL build */
#ifndef CONFIG_SPL_BUILD
#undef CONFIG_BOOTCOMMAND
#define CONFIG_BOOTCOMMAND RKIMG_BOOTCOMMAND
#endif

/* Enable eMMC SDMA support */
#define CONFIG_MMC_SDHCI_SDMA

/* Set eMMC as the default boot device */
#define CONFIG_SYS_MMC_ENV_DEV 0
#define CONFIG_SYS_MMC_MAX_BLK_COUNT	32768

/* Enable efuse support for cpuid, serial and macaddr */
#define CONFIG_MISC_INIT_R
#define CONFIG_SERIAL_TAG
#define CONFIG_ENV_OVERWRITE

/* Enable default BMP display */
#define CONFIG_BMP_16BPP
#define CONFIG_BMP_24BPP
#define CONFIG_BMP_32BPP

#endif /* __RK3399_VAAMAN_H */
