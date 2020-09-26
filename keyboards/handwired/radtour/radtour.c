#include "radtour.h"

void keyboard_pre_init_user(void) {
	setPinOutput(D6);
    writePinHigh(D6);
}
