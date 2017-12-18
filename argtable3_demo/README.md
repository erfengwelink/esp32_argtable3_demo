# Example: argtable3 lib usage.






|   src files	|-------+----argtable_demo	-->demo
                        |
			|----app_console	-->console machine
		        |
			+----cmd_app		-->user cmds






logs:


I (0) cpu_start: App cpu up.

I (209) heap_init: Initializing. RAM available for dynamic allocation:

I (216) heap_init: At 3FFAE6E0 len 00001920 (6 KiB): DRAM

I (222) heap_init: At 3FFB29D0 len 0002D630 (181 KiB): DRAM

I (228) heap_init: At 3FFE0440 len 00003BC0 (14 KiB): D/IRAM

I (235) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM

I (241) heap_init: At 40088E58 len 000171A8 (92 KiB): IRAM

I (247) cpu_start: Pro cpu start user code

I (265) cpu_start: Starting scheduler on PRO CPU.

I (0) cpu_start: Starting scheduler on APP CPU.


Type 'help' to get the list of commands.

CMD> xcmd1 -n jj -s f

I (38590) xcmd1: ][

I (38590) xcmd1: xcmd1_args [1111]||{"jj","f"}



note:just complete xcmd1 argtable ,others need your addition.
