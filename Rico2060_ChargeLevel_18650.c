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
#include "Arduino.h"
#include "Rico0260_ChargeLevel_18650_h"

Rico0260_ChargeLevel_18650::Rico0260_ChargeLevel_18650()
{
    _initTableauTensions();
}

/**
 * Loads each voltage value in its matching charge element (index)
 */
void Rico0260_ChargeLevel_18650::_initVoltsArray()
{
    _TableauTensions[0] = 3.200;
    _TableauTensions[1] = 3.250;
    _TableauTensions[2] = 3.300;
    _TableauTensions[3] = 3.350;
    _TableauTensions[4] = 3.400;
    _TableauTensions[5] = 3.450;
    _TableauTensions[6] = 3.500;
    _TableauTensions[7] = 3.550;
    _TableauTensions[8] = 3.600;
    _TableauTensions[9] = 3.650;
    _TableauTensions[10] = 3.700;
    _TableauTensions[11] = 3.703;
    _TableauTensions[12] = 3.706;
    _TableauTensions[13] = 3.710;
    _TableauTensions[14] = 3.713;
    _TableauTensions[15] = 3.716;
    _TableauTensions[16] = 3.719;
    _TableauTensions[17] = 3.723;
    _TableauTensions[18] = 3.726;
    _TableauTensions[19] = 3.729;
    _TableauTensions[20] = 3.732;
    _TableauTensions[21] = 3.735;
    _TableauTensions[22] = 3.739;
    _TableauTensions[23] = 3.742;
    _TableauTensions[24] = 3.745;
    _TableauTensions[25] = 3.748;
    _TableauTensions[26] = 3.752;
    _TableauTensions[27] = 3.755;
    _TableauTensions[28] = 3.758;
    _TableauTensions[29] = 3.761;
    _TableauTensions[30] = 3.765;
    _TableauTensions[31] = 3.768;
    _TableauTensions[32] = 3.771;
    _TableauTensions[33] = 3.774;
    _TableauTensions[34] = 3.777;
    _TableauTensions[35] = 3.781;
    _TableauTensions[36] = 3.784;
    _TableauTensions[37] = 3.787;
    _TableauTensions[38] = 3.790;
    _TableauTensions[39] = 3.794;
    _TableauTensions[40] = 3.797;
    _TableauTensions[41] = 3.800;
    _TableauTensions[42] = 3.805;
    _TableauTensions[43] = 3.811;
    _TableauTensions[44] = 3.816;
    _TableauTensions[45] = 3.821;
    _TableauTensions[46] = 3.826;
    _TableauTensions[47] = 3.832;
    _TableauTensions[48] = 3.837;
    _TableauTensions[49] = 3.842;
    _TableauTensions[50] = 3.847;
    _TableauTensions[51] = 3.853;
    _TableauTensions[52] = 3.858;
    _TableauTensions[53] = 3.863;
    _TableauTensions[54] = 3.868;
    _TableauTensions[55] = 3.874;
    _TableauTensions[56] = 3.879;
    _TableauTensions[57] = 3.884;
    _TableauTensions[58] = 3.889;
    _TableauTensions[59] = 3.895;
    _TableauTensions[60] = 3.900;
    _TableauTensions[61] = 3.906;
    _TableauTensions[62] = 3.911;
    _TableauTensions[63] = 3.917;
    _TableauTensions[64] = 3.922;
    _TableauTensions[65] = 3.928;
    _TableauTensions[66] = 3.933;
    _TableauTensions[67] = 3.939;
    _TableauTensions[68] = 3.944;
    _TableauTensions[69] = 3.950;
    _TableauTensions[70] = 3.956;
    _TableauTensions[71] = 3.961;
    _TableauTensions[72] = 3.967;
    _TableauTensions[73] = 3.972;
    _TableauTensions[74] = 3.978;
    _TableauTensions[75] = 3.983;
    _TableauTensions[76] = 3.989;
    _TableauTensions[77] = 3.994;
    _TableauTensions[78] = 4.000;
    _TableauTensions[79] = 4.008;
    _TableauTensions[80] = 4.015;
    _TableauTensions[81] = 4.023;
    _TableauTensions[82] = 4.031;
    _TableauTensions[83] = 4.038;
    _TableauTensions[84] = 4.046;
    _TableauTensions[85] = 4.054;
    _TableauTensions[86] = 4.062;
    _TableauTensions[87] = 4.069;
    _TableauTensions[88] = 4.077;
    _TableauTensions[89] = 4.085;
    _TableauTensions[90] = 4.092;
    _TableauTensions[91] = 4.100;
    _TableauTensions[92] = 4.111;
    _TableauTensions[93] = 4.122;
    _TableauTensions[94] = 4.133;
    _TableauTensions[95] = 4.144;
    _TableauTensions[96] = 4.156;
    _TableauTensions[97] = 4.167;
    _TableauTensions[98] = 4.178;
    _TableauTensions[99] = 4.189;
    _TableauTensions[100] = 4.200;
}

/**
 * Performs a binary search to find the index corresponding to a voltage.
 * The index of the array is the charge %
*/
int Rico0260_ChargeLevel_18650::getChargeLevel_18650(double volts)
{
    int idx = 50;
    int prev = 0;
    int half = 0;
    if (volts >= 4.2)
    {
        return 100;
    }
    if (volts <= 3.2)
    {
        return 0;
    }
    while (true)
    {
        half = abs(idx - prev) / 2;
        prev = idx;
        if (volts >= _TableauTensions[idx])
        {
            idx = idx + half;
        }
        else
        {
            idx = idx - half;
        }
        if (prev == idx)
        {
            break;
        }
    }
    return idx;
}
