[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](http://makeapullrequest.com)
[![HitCount](http://hits.dwyl.io/nulLeeKH/arduino-pid-control-library.svg)](http://hits.dwyl.io/nulLeeKH/arduino-pid-control-library)
![GitHub last commit](https://img.shields.io/github/last-commit/nulLeeKH/arduino-pid-control-library.svg)

# arduino-pid-control-library
The library for arduino to performing PID control

## Functions

### PIDC

#### Constructor of PIDC class.
```cpp
PIDC(float kP, float kI, float kD);
```

#### Arguments

##### kP
- K<sub>p</sub> value for PID control.

##### kI
- K<sub>i</sub> value for PID control.

##### kD
- K<sub>d</sub> value for PID control.

### CalcPID

#### Calculation function for PID control.
```cpp
float CalcPID(float setPoint, float crntInput, float prevInput, float inputTerm);
```

####  Arguments

##### setPoint
- Target value for PID control.

##### crntInput
- Current status value.

##### prevInput
- Previous status value.

##### inputTerm
- Interval between reading values.

####  Return
- Control factor to reach the target value.

## Patch Note

### v1.0.0-alpha
- Initial release
