#include <gba_console.h>
#include <gba_video.h>
#include <gba_interrupt.h>
#include <gba_systemcalls.h>
#include <gba_input.h>
#include <stdio.h>
#include <stdlib.h>

#include "main_screen.h"

MainScreen::MainScreen()
{
  // There's nothing todo atm
}

void MainScreen::Init()
{
	consoleDemoInit();

	// ansi escape sequence to set print co-ordinates
	// /x1b[line;columnH
	iprintf("\x1b[10;10HHello World!\n");
}

void MainScreen::Update()
{
  // Meh
}

void MainScreen::Close()
{
  // Um, nothing?
}

MainScreen::~MainScreen()
{
  // nothing to kill
}