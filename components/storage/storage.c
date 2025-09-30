#include "storage.h"
#include "esp_spiffs.h"
#include <stdio.h>

void storage_init() {
    esp_vfs_spiffs_conf_t conf = {
        .base_path = "/spiffs",
        .partition_label = NULL,
        .max_files = 5,
        .format_if_mount_failed = true
    };
    esp_vfs_spiffs_register(&conf);
}

void storage_write(const char *data) {
    FILE *f = fopen("/spiffs/log.txt", "a");
    if (f) {
        fprintf(f, "%s\n", data);
        fclose(f);
    }
}

void storage_read_all() {
    FILE *f = fopen("/spiffs/log.txt", "r");
    if (f) {
        char line[64];
        while (fgets(line, sizeof(line), f)) {
            printf("%s", line);
        }
        fclose(f);
    }
}
