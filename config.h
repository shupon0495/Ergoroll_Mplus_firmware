#pragma once

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_USART_DRIVER SIOD0
#define DEBOUNCE 5
#define SPLIT_POINTING_ENABLE /*スレーブ側からマスターにトラボを通信*/
#define SPLIT_LED_STATE_ENABLE /*num lockなどを同期*/
#define SPLIT_LAYER_STATE_ENABLE /*レイヤーを同期*/


#define MATRIX_ROWS 10
#define MATRIX_COLS 10

#define ENCODER_RESOLUTION 4



