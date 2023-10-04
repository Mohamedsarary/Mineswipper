/*  Name    :  Mohammed Alaa Alkoka
 *  Date    :  4 Oct. 2023
 *  Subject : UART Communication
 *            ESP CODE 
 */
 
char command;

void setup() {
  Serial.begin(9600); // Setting the required baud rate to match Arduino
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();

    // Process the received command
    
    // Applied for each case 
    switch (command) {
      case 'F':
        // Move forward 
        // Implement Function logic for moving forward
        break;
      case 'B':
        // Move backward 
        // Implement Function logic for moving backward
        break;
      case 'L':
        // Turn left
        // Implement Function logic for turning left
        break;
      case 'R':
        // Turn right 
        // Implement Function logic for turning right
        break;
      case 'S':
        // Change motor speed using PWM
        // Implement code to adjust motor speed using analogWrite()
        break;
      default:
        // Handle unknown commands or errors
        break;
    }
  }
}
