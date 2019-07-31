# arduino-pid-controller-library
The library for arduino to performing PID control.

## Functions

### PIDC

#### Constructor of PIDC class.

```cpp
PIDC(float kP, float kI, float kD);
```

#### Arguments

1. kP

    - K<sub>p</sub> value for PID control.

1. kI

    - K<sub>i</sub> value for PID control.

1. kD

    - K<sub>d</sub> value for PID control.

### CalcPID

#### Calculation function for PID control.

```cpp
float CalcPID(float setPoint, float crntInput, float prevInput, float inputTerm);
```

####  Arguments

1. setPoint

    - Target value for PID control.

1. crntInput

    - Current status value.

1. prevInput

    - Previous status value.

1. inputTerm

    - Interval between reading values.

####  Return

- float

    - Control factor to reach the target value.

## Patch Note

### v1.0.0-alpha

- Initial release
