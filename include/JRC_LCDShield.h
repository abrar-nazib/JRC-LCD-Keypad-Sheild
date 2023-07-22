#ifndef JRC_LCDShield
#define JRC_LCDShield
#include <LiquidCrystal.h>
#include <Arduino.h>
#include "JRC.h"

#define btnRIGHT 0
#define btnUP 1
#define btnDOWN 2
#define btnLEFT 3
#define btnSELECT 4
#define btnNONE 5

class JRC_LCDSheild
{
public:
  /**
   * @brief LiquidCrystal object, Screen
   *
   */
  LiquidCrystal screen;

  /**
   * @brief Construct a new JRC_LCDSheild object
   */
  JRC_LCDSheild() : screen(ARD_D8, ARD_D9, ARD_D4, ARD_D5, ARD_D6, ARD_D7)
  {
  }

  /**
   * @brief Get the Pressed Button in integer
   *
   * @return int: btnRIGHT=0, btnUP=1, btnDOWN=2, btnLEFT=3, btnSELECT=4, btnNONE=5
   */
  int getPressedButton();

  /**
   * @brief Get the Pressed Button in String
   *
   * @return String: "btnRIGHT", "btnUP", "btnDOWN", "btnLEFT", "btnSELECT", "btnNONE"
   */
  String getPressedButtonStr();
};
#endif // JRC_LCDShield