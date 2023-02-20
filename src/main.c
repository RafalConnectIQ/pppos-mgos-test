#include "mgos.h"
#include "mgos_pppos.h"

enum mgos_app_init_result mgos_app_init(void)
{
    // esp_log_level_set("esp-netif_lwip-ppp", ESP_LOG_VERBOSE);
    mgos_gpio_set_mode(21, MGOS_GPIO_MODE_OUTPUT);
    mgos_gpio_write(21, true);
    mgos_msleep(15000); // sleeping for 4 seconds to turn on gsm modem
    mgos_pppos_connect(0 /* if_instance */);
    return MGOS_APP_INIT_SUCCESS;
}
