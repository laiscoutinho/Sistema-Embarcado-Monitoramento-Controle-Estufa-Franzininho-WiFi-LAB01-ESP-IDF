idf_component_register(SRCS "main.c"
                       INCLUDE_DIRS "."
                       REQUIRES dht11_driver ldr_driver oled_driver menu storage)
