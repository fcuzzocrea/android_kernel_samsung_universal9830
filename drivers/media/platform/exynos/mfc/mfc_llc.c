/*
 * drivers/media/platform/exynos/mfc/mfc_llc.c
 *
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#if IS_ENABLED(CONFIG_MFC_USES_LLC)

#include <linux/module.h>
#include <soc/samsung/exynos-sci.h>

#include "mfc_llc.h"

void mfc_llc_enable(struct mfc_core *core)
{
	mfc_core_debug_enter();

	if (core->dev->debugfs.llc_disable)
		return;

	/* region_index, enable, cache way */
	llc_region_alloc(LLC_REGION_MFC_DISPLAY, 1);
	core->llc_on_status = 1;
	mfc_core_info("[LLC] enabled\n");
	MFC_TRACE_CORE("[LLC] enabled\n");

	mfc_core_debug_leave();
}

void mfc_llc_disable(struct mfc_core *core)
{
	mfc_core_debug_enter();

	llc_region_alloc(LLC_REGION_MFC_DISPLAY, 0);
	core->llc_on_status = 0;
	mfc_core_info("[LLC] disabled\n");
	MFC_TRACE_CORE("[LLC] disabled\n");

	mfc_core_debug_leave();
}

void mfc_llc_flush(struct mfc_core *core)
{
	mfc_core_debug_enter();

	if (core->dev->debugfs.llc_disable)
		return;

	if (!core->need_llc_flush)
		return;

	llc_flush(LLC_REGION_MFC_DISPLAY);
	mfc_core_debug(2, "[LLC] flushed\n");
	MFC_TRACE_CORE("[LLC] flushed\n");

	mfc_core_debug_leave();
}
#endif
