# debounce-Library
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
