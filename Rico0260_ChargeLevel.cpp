/*
  MIT License
  
  Copyright (c) 2021 Rico0260
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/
#include <Arduino.h>
#include "Rico0260_ChargeLevel.h"

Rico0260_ChargeLevel::Rico0260_ChargeLevel()
{
    _initArray_18650();
}

/**
 * Loads each voltage value in its matching charge element (index)
 */
void Rico0260_ChargeLevel::_initArray_18650()
{
    _TableauTensions_18650[0] = 3.200;
    _TableauTensions_18650[1] = 3.250;
    _TableauTensions_18650[2] = 3.300;
    _TableauTensions_18650[3] = 3.350;
    _TableauTensions_18650[4] = 3.400;
    _TableauTensions_18650[5] = 3.450;
    _TableauTensions_18650[6] = 3.500;
    _TableauTensions_18650[7] = 3.550;
    _TableauTensions_18650[8] = 3.600;
    _TableauTensions_18650[9] = 3.650;
    _TableauTensions_18650[10] = 3.700;
    _TableauTensions_18650[11] = 3.703;
    _TableauTensions_18650[12] = 3.706;
    _TableauTensions_18650[13] = 3.710;
    _TableauTensions_18650[14] = 3.713;
    _TableauTensions_18650[15] = 3.716;
    _TableauTensions_18650[16] = 3.719;
    _TableauTensions_18650[17] = 3.723;
    _TableauTensions_18650[18] = 3.726;
    _TableauTensions_18650[19] = 3.729;
    _TableauTensions_18650[20] = 3.732;
    _TableauTensions_18650[21] = 3.735;
    _TableauTensions_18650[22] = 3.739;
    _TableauTensions_18650[23] = 3.742;
    _TableauTensions_18650[24] = 3.745;
    _TableauTensions_18650[25] = 3.748;
    _TableauTensions_18650[26] = 3.752;
    _TableauTensions_18650[27] = 3.755;
    _TableauTensions_18650[28] = 3.758;
    _TableauTensions_18650[29] = 3.761;
    _TableauTensions_18650[30] = 3.765;
    _TableauTensions_18650[31] = 3.768;
    _TableauTensions_18650[32] = 3.771;
    _TableauTensions_18650[33] = 3.774;
    _TableauTensions_18650[34] = 3.777;
    _TableauTensions_18650[35] = 3.781;
    _TableauTensions_18650[36] = 3.784;
    _TableauTensions_18650[37] = 3.787;
    _TableauTensions_18650[38] = 3.790;
    _TableauTensions_18650[39] = 3.794;
    _TableauTensions_18650[40] = 3.797;
    _TableauTensions_18650[41] = 3.800;
    _TableauTensions_18650[42] = 3.805;
    _TableauTensions_18650[43] = 3.811;
    _TableauTensions_18650[44] = 3.816;
    _TableauTensions_18650[45] = 3.821;
    _TableauTensions_18650[46] = 3.826;
    _TableauTensions_18650[47] = 3.832;
    _TableauTensions_18650[48] = 3.837;
    _TableauTensions_18650[49] = 3.842;
    _TableauTensions_18650[50] = 3.847;
    _TableauTensions_18650[51] = 3.853;
    _TableauTensions_18650[52] = 3.858;
    _TableauTensions_18650[53] = 3.863;
    _TableauTensions_18650[54] = 3.868;
    _TableauTensions_18650[55] = 3.874;
    _TableauTensions_18650[56] = 3.879;
    _TableauTensions_18650[57] = 3.884;
    _TableauTensions_18650[58] = 3.889;
    _TableauTensions_18650[59] = 3.895;
    _TableauTensions_18650[60] = 3.900;
    _TableauTensions_18650[61] = 3.906;
    _TableauTensions_18650[62] = 3.911;
    _TableauTensions_18650[63] = 3.917;
    _TableauTensions_18650[64] = 3.922;
    _TableauTensions_18650[65] = 3.928;
    _TableauTensions_18650[66] = 3.933;
    _TableauTensions_18650[67] = 3.939;
    _TableauTensions_18650[68] = 3.944;
    _TableauTensions_18650[69] = 3.950;
    _TableauTensions_18650[70] = 3.956;
    _TableauTensions_18650[71] = 3.961;
    _TableauTensions_18650[72] = 3.967;
    _TableauTensions_18650[73] = 3.972;
    _TableauTensions_18650[74] = 3.978;
    _TableauTensions_18650[75] = 3.983;
    _TableauTensions_18650[76] = 3.989;
    _TableauTensions_18650[77] = 3.994;
    _TableauTensions_18650[78] = 4.000;
    _TableauTensions_18650[79] = 4.008;
    _TableauTensions_18650[80] = 4.015;
    _TableauTensions_18650[81] = 4.023;
    _TableauTensions_18650[82] = 4.031;
    _TableauTensions_18650[83] = 4.038;
    _TableauTensions_18650[84] = 4.046;
    _TableauTensions_18650[85] = 4.054;
    _TableauTensions_18650[86] = 4.062;
    _TableauTensions_18650[87] = 4.069;
    _TableauTensions_18650[88] = 4.077;
    _TableauTensions_18650[89] = 4.085;
    _TableauTensions_18650[90] = 4.092;
    _TableauTensions_18650[91] = 4.100;
    _TableauTensions_18650[92] = 4.111;
    _TableauTensions_18650[93] = 4.122;
    _TableauTensions_18650[94] = 4.133;
    _TableauTensions_18650[95] = 4.144;
    _TableauTensions_18650[96] = 4.156;
    _TableauTensions_18650[97] = 4.167;
    _TableauTensions_18650[98] = 4.178;
    _TableauTensions_18650[99] = 4.189;
    _TableauTensions_18650[100] = 4.200;
}

/**
 * Performs a binary search to find the index corresponding to a voltage.
 * The index of the array is the charge %
*/
int Rico0260_ChargeLevel::getChargeLevel_18650(double volts)
{
    int index = 50; //index de depart
    int indexBas = 0;
    int indexHaut = 100;
    if (volts >= _TableauTensions_18650[100])
    {
        return 100;
    }
    if (volts <= _TableauTensions_18650[0])
    {
        return 0;
    }
    while (true)
    {
//        Serial.print(indexBas);
//        Serial.print(", ");
//        Serial.print(index);
//        Serial.print(", ");
//        Serial.println(indexHaut);
        if (volts < _TableauTensions_18650[index])
        {
            indexHaut = index;
            index = index - abs(indexHaut - indexBas + 1)/2;
        }
        else
        {
            indexBas = index;
            index = index + abs(indexHaut - indexBas + 1)/2;
        }

        if (index <= indexBas)
        {
            break;
        }
    }
    return index;
}
