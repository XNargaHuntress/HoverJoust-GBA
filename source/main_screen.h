#pragma once

#include "framework/game_screen.h"

class MainScreen : public GameScreen
{
  public:
    MainScreen();
    void Init();
    void Update();
    void Close();
    ~MainScreen();
};