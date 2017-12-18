#include <stdio.h>
#include <string.h>
#include "esp_log.h"
#include "esp_console.h"
#include "argtable3/argtable3.h"
#include "cmd_decl.h"

static void register_1();
static void register_2();
static void register_3();
static void register_4();

void register_app()
{
    register_1();
    register_2();
    register_3();
    register_4();
}

static struct {
    struct arg_int *i;
    struct arg_str *s1;
    struct arg_str *s2;
    struct arg_end *end;
} xcmd1_args;

static int xcmd1(int argc, char** argv)
{
    ESP_LOGI(__func__, "][");
    int nerrors = arg_parse(argc, argv, (void**) &xcmd1_args);
    if (nerrors != 0) {
        arg_print_errors(stderr, xcmd1_args.end, argv[0]);
        return 1;
    }
	ESP_LOGI(__func__,"xcmd1_args [%d]||{\"%s\",\"%s\"}",xcmd1_args.i->ival[0],xcmd1_args.s1->sval[0],xcmd1_args.s2->sval[0]);
	
    return 0;
}

static void register_1()
{
	xcmd1_args.i = arg_int0("i", "intvalue", "<ival>", "app int val");
	xcmd1_args.i->ival[0] = 1111;
	xcmd1_args.s1 = arg_str1("n", "name", "<name>", "name of user");
	xcmd1_args.s2 = arg_str0("s", "sex", "<sex>", "sex of user");
	xcmd1_args.end = arg_end(2);

	const esp_console_cmd_t cmd = {
        .command = "xcmd1",
        .help = "register_1",
        .hint = NULL,
        .func = &xcmd1,
		.argtable = &xcmd1_args
    };

    ESP_ERROR_CHECK( esp_console_cmd_register(&cmd) );
}

static int xcmd2(int argc, char** argv)
{
    ESP_LOGI(__func__, "][");
	return 0;
}

static void register_2()
{
	const esp_console_cmd_t cmd = {
        .command = "xcmd2",
        .help = "register_2",
        .hint = NULL,
        .func = &xcmd2,
    };
    ESP_ERROR_CHECK( esp_console_cmd_register(&cmd) );
}

static int xcmd3(int argc, char** argv)
{
    ESP_LOGI(__func__, "][");
	return 0;
}

static void register_3()
{
	const esp_console_cmd_t cmd = {
        .command = "xcmd3",
        .help = "register_3",
        .hint = NULL,
        .func = &xcmd3,
    };
    ESP_ERROR_CHECK( esp_console_cmd_register(&cmd) );
}

static int xcmd4(int argc, char** argv)
{
    ESP_LOGI(__func__, "][");
	return 0;
}

static void register_4()
{
	const esp_console_cmd_t cmd = {
        .command = "xcmd4",
        .help = "register_4",
        .hint = NULL,
        .func = &xcmd4,
    };
    ESP_ERROR_CHECK( esp_console_cmd_register(&cmd) );
}

void app_console_register_default()
{
	register_1();
	register_2();
	register_3();
	register_4();
}

