//*****************************************************************************
//
//! \addtogroup HD44780
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HD44780_Config Invoker Configurtion
//!
//! \brief Configurtions such as the GPIO Pin used should be set before using
//! this driver.
//!    
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HD44780_Config_Pins Pin Configurtion
//!
//! \brief GPIO Pins Configurtions that communication with the LCD should be 
//! set before using this driver.
//!    
//! @{
//
//*****************************************************************************    
#define HD44780_PIN_D7          sD7
#define HD44780_PIN_D6          sD6
#define HD44780_PIN_D5          sD5
#define HD44780_PIN_D4          sD4
#define HD44780_PIN_D3          PA3
#define HD44780_PIN_D2          PA2
#define HD44780_PIN_D1          PA1
#define HD44780_PIN_D0          PA0

#define HD44780_PIN_E           sD9
#define HD44780_PIN_RW          sD10
#define HD44780_PIN_RS          sD8
//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HD44780_Config_Module LCD Moudle Configurtion
//!
//! \brief Configure the LCD moudle. such as 1602, 1601, 20*2. 
//! set before using this driver.
//!    
//! @{
//
//*****************************************************************************
//
//! The LCD Display Line, can be \b 1 or \b 2.
//
#define HD44780_DISPLAY_LINE    2

//
//! The LCD Character number, can be 8, 16, 20, 40, 80
//
#define HD44780_DISPLAY_CHARACTER                                             \
                                16 
//*****************************************************************************
//
//!
// @}
//*****************************************************************************                                 

//*****************************************************************************
//
//! \addtogroup HD44780_Config_Function Function Configurtion
//!
//! \brief Configure the LCD character font, interface data length.
//!    
//! @{
//
//*****************************************************************************
//
//! The LCD display character font.
//!
//! Can be set to:
//! - HD44780_CHARACTER_FONT_5X8 - font is 5*8.
//! - HD44780_CHARACTER_FONT_5X10 - font is 5*10.
//! .
//
#define HD44780_CHARACTER_FONT  HD44780_CHARACTER_FONT_5X8

//
//! The LCD interface data length.
//!
//! Can be set to:
//! - \ref HD44780_INTERFACE_DATA_LEN_8 - data length is 8 bits.
//! - \ref HD44780_INTERFACE_DATA_LEN_4 - data length is 4 bits.
//! .
//! More info refrence \ref HD44780_Config_Interface_DL.
//
#define HD44780_INTERFACE_DATA_LEN                                            \
                                HD44780_INTERFACE_DATA_LEN_4

//*****************************************************************************
//
//! @}
//
//***************************************************************************** 

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************
