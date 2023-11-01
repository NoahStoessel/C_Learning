#include <Carbon/Carbon.h>

void simulateMouseClick() {
    // Get the current mouse location
    Point mouseLocation;
    GetMouse(&mouseLocation);
    
    // Create a mouse down event
    MouseEventRecord downEvent;
    downEvent.event = kEventMouseDown;
    downEvent.window = GetWindowFromPort(FrontWindow());
    downEvent.modifiers = 0;
    downEvent.when = GetCurrentEventTime();
    downEvent.where = mouseLocation;
    downEvent.clickCount = 1;
    
    // Post the mouse down event
    SendEventToEventTarget(&downEvent, kEventTargetWindow);
    
    // Create a mouse up event
    MouseEventRecord upEvent;
    upEvent.event = kEventMouseUp;
    upEvent.window = downEvent.window;
    upEvent.modifiers = 0;
    upEvent.when = GetCurrentEventTime();
    upEvent.where = mouseLocation;
    upEvent.clickCount = 1;
    
    // Post the mouse up event
    SendEventToEventTarget(&upEvent, kEventTargetWindow);
}

int main() {
    simulateMouseClick();
    return 0;
}


