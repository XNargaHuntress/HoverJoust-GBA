#include <gba_console.h>
#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include <stdio.h>
#include <stdlib.h>

#include "framework/game_screen.h"
#include "main_screen.h"

//---------------------------------------------------------------------------------
// Program entry point
//---------------------------------------------------------------------------------
int main(void) {
//---------------------------------------------------------------------------------
  GameScreen* currentScreen_ = new MainScreen();

	// the vblank interrupt must be enabled for VBlankIntrWait() to work
	// since the default dispatcher handles the bios flags no vblank handler
	// is required
	irqInit();
	irqEnable(IRQ_VBLANK);
	
	currentScreen_->Init();

	while (1) {
	  currentScreen_->Update();
		VBlankIntrWait();
	}
	
	if (currentScreen_ != nullptr)
	  delete currentScreen_;
}