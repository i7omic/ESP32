#ifndef MAIN_RGB_LED_H_
#define MAIN_RGB_LED_H_

// RGB LED GPIOs
#define RGB_LED_RED_GPIO    11
#define RGB_LED_BLUE_GPIO   12
#define RGB_LED_GREEN_GPIO  13

// RGB LED color mix channels
#define RBG_LED_CHANNEL_NUM 3

// RGB LED configuration
typedef struct 
{
    int channel;
    int gpio;
    int mode;
    int timer_index;
} ledc_info_t;
extern ledc_info_t ledc_ch[RBG_LED_CHANNEL_NUM];

/**
*   Color to indicate WiFi application has started. 
*/
void rgb_led_wifi_app_started(void);

/**
*  Color to indicate HTTP server has started. 
*/
void rgb_led_http_server_started(void);

/**
*   Color to indicate that the ESP32 is connected to an access point
*/
void rgb_led_wifi_connected(void);

#endif  // MAIN_RGB_LED_H_