/*
version : v1.0.0-alpha

MIT License

Copyright (c) 2019 nulLeeKH <i_am@nulleekh.com>

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
#include "PIDC.h"

#define pCalc(__kP, _err) __kP*_err                             //P-control
#define iCalc(__kI, _err, _inputTerm) __kI*_err*_inputTerm      //I-control
#define dCalc(__kD, _dIn, _inputTerm) -__kD*(_dIn/_inputTerm)   //D-control



PIDC::PIDC(float kP, float kI, float kD) {
    _kP=kP; p=0;
    _kI=kI; i=0;
    _kD=kD; d=0;

    err=0; dIn=0;
}

float PIDC::CalcPID(float setPoint, float crntInput, float prevInput, float inputTerm) {
    err = setPoint-crntInput;
    dIn = crntInput-prevInput;

    p = pCalc(_kP, err);
    i += iCalc(_kI, err, inputTerm);
    d = dCalc(_kD, dIn, inputTerm);

    return  p+i+d;
}