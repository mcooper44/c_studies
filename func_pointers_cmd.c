#include <stdio.h>

typedef void(*functionPointerType)(void);

struct commandStruct {
	char const *name;
	functionPointerType execute;
	char const *help;
};

const struct commandStruct commands[] = {
	{"ver", &CmdVersion,
	 "Display firmware version"},
	{"flashTest", &CmdFlashTest,
	 "Runs the flash unit test, prints the number of errors upon completion"},
	{"blinkLED", &CmdBlinkLED,
	 "Sets the LED to blink at a desired rate (Parameter: frequency (Hz))"},
	{"",0,""} // End of table indicator, MUST BE LAST
};

void CmdVersion(void) {
	printf("Firmware Version 1.0");
}

void CmdFlashTest(void) {
	printf("Flashing");
}

int CmdBlinkLED(int hertz) {
	printf("Blinking at %d hertz", hertz);
}

void main(void) {

}
