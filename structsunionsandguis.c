typedef enum {
	closed,
	closing,
	opening,
	opened
} status;

enum status2 {
	closed,
	closing,
	opening,
	opened
};

status door = closed;
OR...
door = 0;

int door2 = status2.closed;

// sample GUI code

#include "GUI.h"
#include "ts.h"

while(GUI_Init());

BUTTON_Handle pushbutton_handle = BUTTON_CreateEx(95, 150, 50, 20, 0, WM_CF_SHOW, 0, 1);
PROGBAR_Handle progressbar_handle = PROGBAR_CreateEx(65, 75, 110, 10, 0, WM_CF_SHOW, PROGBAR_CF_HORIZONTAL, 2);

int progressbarvalue;

PROGBAR_SetValue(progressbar_handle, 0);

if(BUTTON_IsPressed(pushbutton_handle))	{
	if(++progressbarvalue > 99)	progressbarvalue = 0;
	PROGBAR_SetValue(progressbar_handle, progressbarvalue);
	while(BUTTON_IsPressed(pushbutton_handle));
}