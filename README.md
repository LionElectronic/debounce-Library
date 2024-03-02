
debounce Library

sample :

#include "debounce.h"

// Initialize the key debouncer
debouncer_t keyDebouncer = {
    .debCount = KEY_DEB_COUNT, 
    .lastOut = KEY_RELEASED
};

// Inside the loop:
uint32_t keys = pins or variables;
keys = Debounce(&keyDebouncer, keys);

// Place all the pins or variables you want to debounce inside a 32-bit variable named 'keys'
// and pass it to the Debounce function. This function will return debounced values of all those pins and variables.

// You can adjust the debounce count using KEY_DEB_COUNT. 
// Increase this value if the loop speed is higher. I usually use values between 10 to 100.

// The variable 'lastOut' determines the initial state of the keys at the start of the program. 
// If all the key states are 1, you can assign the same number of 1s to it.

// Start by reading one key using this library. Then you can add other keys into different bits of 'keys' variable.


![image](https://github.com/LionElectronic/debounce-Library/assets/157172720/3f8319a5-3d26-4499-8308-86388d1b9895)

A higher-level library example that uses ADC for key reading and the upper library for debounce.

Each key has 4 states:

Pressed
Released
Held for the first time
Held for a long time
For all of these states, an independent function can be defined to execute. Windows and operating systems read key inputs based on this principle.



You can also use this library for debouncing numbers. For example, it can refrain from displaying a fluctuating numerical value on the screen and only show it once the fluctuation has ceased and stabilized.
