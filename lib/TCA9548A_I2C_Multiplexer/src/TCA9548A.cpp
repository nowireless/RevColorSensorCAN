//
// Created by Ryan Sjostrand on 5/11/22.
//

#include "TCA9548A.h"
#include <Wire.h>

TCA9548A::TCA9548A(uint8_t address) : m_address(address) {
    m_currentChannel = 0;
}

void TCA9548A::select(uint8_t channel) {
    // Ignroe the request if an invalid channel is given.
    if (channel > 7) return;

    // Save off the current channel
    m_currentChannel = channel;

    Wire.beginTransmission(m_address);
    Wire.write(1 << channel);
    Wire.endTransmission();
}

uint8_t TCA9548A::currentChannel() {
    return m_currentChannel;
}