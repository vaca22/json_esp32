#include <stdio.h>
#include <cJSON.h>
#include <esp_log.h>

void app_main(void)
{
    cJSON *monitor=cJSON_CreateObject();
    cJSON *name= cJSON_CreateString("fuckyou");
    cJSON_AddItemToObject(monitor,"name",name);
    cJSON *resolutions= cJSON_CreateArray();
    cJSON *resolution= cJSON_CreateNumber(3.56);

    cJSON_AddItemToObject(monitor,"gaga",resolutions);
    cJSON_AddItemToArray(resolutions,resolution);
    char *string= cJSON_Print(monitor);
    ESP_LOGE("fuck","%s",string);
    cJSON_Delete(monitor);

}
