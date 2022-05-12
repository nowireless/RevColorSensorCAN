//
// Created by Ryan Sjostrand on 5/11/22.
//

#ifndef REVCOLORSENSORCAN_TCA9548A_H
#define REVCOLORSENSORCAN_TCA9548A_H

#include <stdint.h>

class TCA9548A {
private:
    uint8_t m_address;
    uint8_t m_currentChannel;
public:
    TCA9548A(uint8_t address);

    void select(uint8_t channel);

    uint8_t currentChannel();
};


#endif //REVCOLORSENSORCAN_TCA9548A_H
