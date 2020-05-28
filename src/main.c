#include "mgos.h"

enum mgos_app_init_result mgos_app_init(void)
{
    mgos_gpio_set_mode(15, MGOS_GPIO_MODE_OUTPUT);
    mgos_gpio_write(15, false);
    mgos_msleep(4000); // sleeping for 4 seconds to turn on gsm modem
    mgos_gpio_write(15, true);
    return MGOS_APP_INIT_SUCCESS;
}
