#include <ppu-lv2.h>

static inline void _sys_console_write(const char *s, uint32_t len) {
	lv2syscall2(398,(uint64_t)s, len);
}

static inline void _sys_timer_sleep(int sleep_time) {
	lv2syscall1(142,(uint64_t)sleep_time);
}

int _sys_sm_control_led(uint8_t led_id, uint8_t led_action) {
	lv2syscall2(386,(uint64_t)led_id,(uint64_t)led_action);
}

int _sys_process_exit(int exit_code)  {
	lv2syscall1(3,(uint64_t)exit_code);
}

int _sys_sm_shutdown(uint16_t op, const void * lpar_parameter, uint64_t parameter_size )   {
	lv2syscall3(379,(uint64_t)op, (uint64_t)lpar_parameter, (uint64_t)parameter_size);
}


int main(int argc,const char *argv[])
{
	_sys_console_write("Spawned LV2Diag\n", 17);

	_sys_sm_control_led(2, 2);

	_sys_timer_sleep(30);

	_sys_console_write("Exiting...\n", 12);

	_sys_sm_shutdown(0x100, NULL, 0);

	_sys_process_exit(0); //needed?
}
