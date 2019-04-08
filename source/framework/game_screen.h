#pragma once


// ---------------------------------
// Game Screen abstract class
// ---------------------------------

// This is a virtual class to allow
// basic screen state management
class GameScreen
{
  public:
    virtual void Init()=0;
    virtual void Update()=0;
    virtual void Close()=0;
    virtual ~GameScreen(){};
};