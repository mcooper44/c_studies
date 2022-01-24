#include <stdio.h>

void CmdVersion(void) {
	printf("Firmware Version 1.0\n");
}

void CmdFlashTest(void) {
	printf("Flashing\n");
}

void CmdBlinkLED(void) {
	printf("Blinking at 20 hertz\n");
}

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

enum CmdList { ver = 0, flashTest, blinkLED };

int main(void) {
	for(int i=ver; i<=blinkLED; i++) {
		
		printf("%s \n", commands[i].name);
		printf("%s \n", commands[i].help);
		(*commands[i].execute)();
	}
	return 0;
}
