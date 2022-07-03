# MCU name
MCU = STM32F103
MCU_LDSCRIPT = STM32F103xB

#Bootloader
BOOTLOADER = stm32duino

# Yes 
EXTRAKEY_ENABLE = yes
ENCODER_ENABLE = yes
NKRO_ENABLE = yes
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
WS2812_DRIVER = bitbang
BOOTMAGIC_ENABLE = yes

# No
LTO_ENABLE = no
RGBLIGHT_ENABLE = no
CONSOLE_ENABLE = no        # Console for debug(+400)
COMMAND_ENABLE = no        # Commands for debug and configuration
MOUSEKEY_ENABLE = no
SLEEP_LED_ENABLE = no
MIDI_ENABLE = no  
UNICODE_ENABLE = no
BLUETOOTH_ENABLE = no
AUDIO_ENABLE = no
BACKLIGHT_ENABLE = no