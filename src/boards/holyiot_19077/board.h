#ifndef HOLYIOT_19077_H
#define HOLYIOT_19077_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           1
#define LED_PRIMARY_PIN       PINNUM(0, 8)
#define LED_STATE_ON          0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTON_DFU          PINNUM(0, 6)
#define BUTTON_PULL         NRF_GPIO_PIN_PULLDOWN

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER    "Holyiot"
#define BLEDIS_MODEL           "19077"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x1915
#define USB_DESC_UF2_PID       0x521F
#define USB_DESC_CDC_ONLY_PID  0x521F

#define UF2_PRODUCT_NAME    "Holyiot"
#define UF2_BOARD_ID        "holyiot-19077"
#define UF2_INDEX_URL       "https://www.nordicsemi.com/Software-and-Tools/Development-Kits/nRF52833-DK"

#endif // HOLYIOT_19077_H
