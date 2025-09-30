idf_component_register(
    SRCS "oled.c" "../ssd1306/ssd1306.c"
    INCLUDE_DIRS "."
    REQUIRES driver
)
