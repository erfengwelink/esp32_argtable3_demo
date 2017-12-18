#include "argtable3/argtable3.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "esp_types.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "cmd_decl.h"
#include "app_console.h"


void app_main(int argc, char *argv[])
{
	app_console_init();
	app_console_run();

}
