# SPDX-License-Identifier: (GPL-2.0-only OR BSD-3-Clause)

dtb-$(CONFIG_STM32MP25X) += \
	stm32mp257f-firmware-mx.dtb

#include $(srctree)/scripts/Makefile.dts

targets += $(dtb-y)

# Add any required device tree compiler flags here
DTC_FLAGS += -a 0x8

PHONY += dtbs
dtbs: $(addprefix $(obj)/, $(dtb-y))
	@:

clean-files := *.dtb *.dtbo *_HS
