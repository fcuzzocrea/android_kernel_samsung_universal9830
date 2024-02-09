# SPDX-License-Identifier: GPL-2.0
dtb-$(CONFIG_ARCH_EXYNOS) += exynos/exynos5433-tm2e.dtb
dtb-$(CONFIG_ARCH_EXYNOS) += exynos/exynos5433-tm2.dtb
dtb-$(CONFIG_ARCH_EXYNOS) += exynos/exynos7-espresso.dtb
dtb-$(CONFIG_SOC_EXYNOS9830) += exynos/exynos9830.dtb
dtbo-$(CONFIG_SOC_EXYNOS9830) += exynos/exynos9830-smdk9830_r02.dtbo
dtbo-$(CONFIG_SOC_EXYNOS9830) += exynos/exynos9830-universal9830_r04.dtbo
dtbo-$(CONFIG_SOC_EXYNOS9830) += exynos/exynos9830-universal9830_r06.dtbo
dtbo-$(CONFIG_SOC_EXYNOS9830) += exynos/exynos9830-universal9830_r05.dtbo
dtbo-$(CONFIG_SOC_EXYNOS9830) += exynos/exynos9830-universal9830_r10.dtbo
dtbo-$(CONFIG_MODEL_C1S) += samsung/exynos990-c1s_eur_open_20.dtbo
dtbo-$(CONFIG_MODEL_C1S) += samsung/exynos990-c1s_eur_open_21.dtbo
dtbo-$(CONFIG_MODEL_C1S) += samsung/exynos990-c1s_eur_open_22.dtbo
dtbo-$(CONFIG_MODEL_C1S) += samsung/exynos990-c1s_eur_open_24.dtbo
dtbo-$(CONFIG_MODEL_C2S) += samsung/exynos990-c2s_eur_open_21.dtbo
dtbo-$(CONFIG_MODEL_C2S) += samsung/exynos990-c2s_eur_open_22.dtbo
dtbo-$(CONFIG_MODEL_C2S) += samsung/exynos990-c2s_eur_open_23.dtbo
dtbo-$(CONFIG_MODEL_C2S) += samsung/exynos990-c2s_eur_open_24.dtbo
dtbo-$(CONFIG_MODEL_Y2S) += samsung/exynos990-y2s_eur_open_17.dtbo
dtbo-$(CONFIG_MODEL_Y2S) += samsung/exynos990-y2s_eur_open_04.dtbo
dtbo-$(CONFIG_MODEL_Y2S) += samsung/exynos990-y2s_eur_open_16.dtbo
dtbo-$(CONFIG_MODEL_Y2S) += samsung/exynos990-y2s_eur_open_05.dtbo
dtbo-$(CONFIG_MODEL_Y2S) += samsung/exynos990-y2s_eur_open_18.dtbo
dtbo-$(CONFIG_MODEL_Y2S) += samsung/exynos990-y2s_eur_open_19.dtbo
dtbo-$(CONFIG_MODEL_Y2S) += samsung/exynos990-y2s_eur_open_21.dtbo
dtbo-$(CONFIG_MODEL_Y2S) += samsung/exynos990-y2s_eur_open_06.dtbo
dtbo-$(CONFIG_MODEL_X1S) += samsung/exynos990-x1s_eur_open_21.dtbo
dtbo-$(CONFIG_MODEL_X1S) += samsung/exynos990-x1s_eur_open_19.dtbo
dtbo-$(CONFIG_MODEL_X1S) += samsung/exynos990-x1s_eur_open_17.dtbo
dtbo-$(CONFIG_MODEL_X1S) += samsung/exynos990-x1s_eur_open_16.dtbo
dtbo-$(CONFIG_MODEL_X1S) += samsung/exynos990-x1s_eur_open_05.dtbo
dtbo-$(CONFIG_MODEL_X1SLTE) += samsung/exynos990-x1slte_eur_open_21.dtbo
dtbo-$(CONFIG_MODEL_X1SLTE) += samsung/exynos990-x1slte_eur_open_00.dtbo
dtbo-$(CONFIG_MODEL_R8S) += samsung/exynos990-r8s_eur_open_00.dtbo
dtbo-$(CONFIG_MODEL_R8S) += samsung/exynos990-r8s_eur_open_02.dtbo
dtbo-$(CONFIG_MODEL_R8S) += samsung/exynos990-r8s_eur_open_05.dtbo
dtbo-$(CONFIG_MODEL_WIN2) += samsung/exynos990-win2_eur_open_00.dtbo
dtbo-$(CONFIG_MODEL_Z3S) += samsung/exynos990-z3s_eur_open_16.dtbo
dtbo-$(CONFIG_MODEL_Z3S) += samsung/exynos990-z3s_eur_open_22.dtbo
dtbo-$(CONFIG_MODEL_Z3S) += samsung/exynos990-z3s_eur_open_17.dtbo
dtbo-$(CONFIG_MODEL_Z3S) += samsung/exynos990-z3s_eur_open_20.dtbo
dtbo-$(CONFIG_MODEL_Z3S) += samsung/exynos990-z3s_eur_open_24.dtbo
dtbo-$(CONFIG_MODEL_Z3S) += samsung/exynos990-z3s_eur_open_21.dtbo
dtbo-$(CONFIG_MODEL_Z3S) += samsung/exynos990-z3s_eur_open_18.dtbo

targets += dtbs
DTB_LIST  := $(dtb-y) $(dtbo-y)
always    := $(DTB_LIST)

dtbs: $(addprefix $(obj)/, $(DTB_LIST))

clean-files := *.dtb*
