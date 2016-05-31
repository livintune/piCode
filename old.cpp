...



int main () {
  init (0);
  int time = 0;
  int rightMotorSpeed = 0;
  int leftMotorSpeed = 0;
  int i;
  unsigned long lastTime = 0;
  double pidOutput;
  int errorSum, lastError;
  double kp, ki, kd;
  int whiteValue=0;
  char whiteOrBlack[15];
  int startOfWhite=0;
  int endOfWhite=0;
  bool redColorRecognised=false;
  bool reversed = false;
  
  open_screen_stream();
  
  while (time < 15){
    unsigned long currentTime = millis;
    double timeChange = (currentTime - lastTime);
    
    for (i = 0; i<15; i++){
      whiteValue = get_pixel(i*20, 120, 3);
      if (whiteValue > 120){
        whiteOrBlack[i] = 1;
      }
      else{
        whiteOrBlack[i] = 0;
      }
    }
    
    for (i=0; i<15; i++) {
      if ((whiteOrBlack[i] == 0) && (whiteOrBlack[i+1] == 1){
        startOfWhite = i;
      }
      
      if ((whiteOrBlack[i] == 1) && (whiteOrBlack[i+1] == 0)){
        endOfWhite = i;
      }
    }
    
    int errorValu = centerOfWhite - 7;
    
    printf("Error Value = %d\n", errorValue);
    int d = 5;
    
    pidError = p*error;
    
    while (time<15) {
      rightMotorSpeed = 50 - errorValue*d;
      leftMotorSpeed = -50 + errorValue*d;
      
      set_motor(1, leftMotorSpeed);
      set_motor(2, rightMotorSpeed);
    }
  
  
  
  
  
  
  
  }






}
