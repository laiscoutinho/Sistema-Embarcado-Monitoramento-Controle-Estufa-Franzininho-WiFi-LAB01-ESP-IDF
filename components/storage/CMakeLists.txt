idf_component_register(
    SRCS "storage.c"
    INCLUDE_DIRS "." "${IDF_PATH}/components/spiffs/include"
    REQUIRES esp_system
)
