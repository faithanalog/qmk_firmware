CONSOLE_ENABLE ?= no        # Console for debug(+400)
COMMAND_ENABLE ?= no        # Commands for debug and configuration
NKRO_ENABLE ?= yes          # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE ?= no     # Enable keyboard backlight functionality
RGBLIGHT_ENABLE ?= no      # Enable RGB light

ifndef QUANTUM_DIR
	include ../../../Makefile
endif
