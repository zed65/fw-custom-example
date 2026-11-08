#include "pch.h"
#include "board_overrides.h"

//void setup_custom_board_overrides();
//void setupBoardHardwareTestOverrides();

Gpio getCommsLedPin() {
	return Gpio::F15;
}

Gpio getRunningLedPin() {
	return Gpio::Unassigned;
}

Gpio getWarningLedPin() {
	return Gpio::Unassigned;
}

void setBoardDefaultConfiguration() {
	engineConfiguration->vbattDividerCoeff = 9.2f;
	engineConfiguration->vbattAdcChannel = EFI_ADC_15;
}

static Gpio OUTPUTS[] = {
    Gpio::D11, // 
    Gpio::D12, // 
    Gpio::D13, //
    Gpio::D14, //
    Gpio::E11, //
    Gpio::E12,
};

int getBoardMetaOutputsCount() {
    return efi::size(OUTPUTS);
}

Gpio* getBoardMetaOutputs() {
    return OUTPUTS;
}

void setCustomVbatt() {
	// set vbatt_divider 5.835
	// 33k / 6.8k
	engineConfiguration->vbattDividerCoeff = 9.2; // 5.835

	engineConfiguration->vbattAdcChannel = EFI_ADC_15;

}

