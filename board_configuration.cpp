#include "pch.h"
#include "board_overrides.h"
Gpio getCommsLedPin() {
	return Gpio::F15;
}
Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}
Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}
static void customBoardDefaultConfiguration() {
	engineConfiguration->vbattDividerCoeff = 9.2f;
	engineConfiguration->vbattAdcChannel = EFI_ADC_15;
}
void setCustomVbatt() {
	// set vbatt_divider 5.835
	// 33k / 6.8k
	engineConfiguration->vbattDividerCoeff = 9.2; // 5.835

	engineConfiguration->vbattAdcChannel = EFI_ADC_15;
}
void setup_custom_board_overrides() {
    custom_board_DefaultConfiguration = customBoardDefaultConfiguration;
}

