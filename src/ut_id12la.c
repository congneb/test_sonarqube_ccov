#include "rfid_id12la.h"

void id12la_tc_000(void)
{
	sl_status_t status;
	sl_i2cspm_t i2cspm;

	status = id12la_init(&i2cspm);

	status = id12la_init(NULL);
}

void id12la_tc_001(void)
{
	uint8_t new_address;
	sl_status_t status;
	status = id12la_change_address_i2c(new_address);
}

// void id12la_ts_000(void)
// {
// 	id12la_tc_000();

// 	id12la_tc_001();
// }

int main(void)
{
  // id12la_ts_000();

	// id12la_tc_000();


	sl_status_t status;
	sl_i2cspm_t i2cspm;

	status = id12la_init(&i2cspm);

	status = id12la_init(NULL);

	return 0;
}