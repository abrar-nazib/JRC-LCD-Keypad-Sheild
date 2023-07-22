#include <Arduino.h>
#include "JRC.h"
#include "JRC_LCDShield.h"

int JRC_LCDSheild::getPressedButton()
{
  int adc_key_in = analogRead(ARD_A0);
  if (adc_key_in > 4050)
    return btnNONE;
  if (adc_key_in < 50)
    return btnRIGHT;
  if (adc_key_in < 600)
    return btnUP;
  if (adc_key_in < 1500)
    return btnDOWN;
  if (adc_key_in < 2400)
    return btnLEFT;
  if (adc_key_in < 4050)
    return btnSELECT;

  return btnNONE; // when all others fail, return this...
}

String JRC_LCDSheild::getPressedButtonStr()
{
  int btn = getPressedButton();
  switch (btn)
  {
  case btnRIGHT:
    return "btnRIGHT";
    break;
  case btnUP:
    return "btnUP";
    break;
  case btnDOWN:
    return "btnDOWN";
    break;
  case btnLEFT:
    return "btnLEFT";
    break;
  case btnSELECT:
    return "btnSELECT";
    break;
  case btnNONE:
    return "btnNONE";
    break;
  default:
    return "btnNONE";
    break;
  }
}