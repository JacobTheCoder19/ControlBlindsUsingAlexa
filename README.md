<h2><em>💎 Key Features 💎</em></h2>
<div>
  🟩 <strong>Smart Blind Control</strong><br>
  &emsp;🔸 Control the opening and closing of blinds using voice commands through Alexa, providing convenience and automation.<br><br>
</div>
<div>
  🟩 <strong>ESP32 Compatibility</strong><br>
  &emsp;🔸 Built to work with ESP32 or ESP8266 microcontrollers, ensuring flexibility in hardware choices.<br><br>
</div>
<div>
  🟩 <strong>Real-Time Feedback</strong><br>
  &emsp;🔸 Serial output provides real-time feedback on the status of the blinds and the received commands, enhancing user experience.<br><br>
</div>
<div>
  🟩 <strong>WiFi Connectivity</strong><br>
  &emsp;🔸 Connects to your home WiFi network, allowing for remote control and integration with smart home systems.<br><br>
</div>
<div>
  🟩 <strong>Customizable Rotation Time</strong><br>
  &emsp;🔸 Adjustable rotation time for the servo motor, allowing for fine-tuning based on the specific blinds used.<br><br>
</div>
<div>
  🟩 <strong>Easy Setup</strong><br>
  &emsp;🔸 Simple setup process with minimal configuration required, making it accessible for users of all skill levels.<br><br>
</div>

<h2><em>✨ Purpose / Inspiration ✨</em></h2>
&emsp;This project was inspired by me wanting to be lazy. I got tired of having to open my blinds every morning and then closing them at night. As well as having to close or open them whenever I wanted to watch a movie during the day. So I decided that I could try and make a device that could allow me to automate opening and closing my blinds at a certain time. As well as allowing them to be controlled by voice using my alexa. That way I could say things like "Open Blinds" or "Open B1" to open the first blind out of two. Because I'm utilizing Alexa and it's features I also made personal routines like "It's Movie Time" so when that's said it closes my blinds, turns on my tv and dvd player, and turn off my light. Then when I say "Movies over" It opens my blinds, turns on my light, and turns off my TV and dvd player. This was super fun to make and I love this project because it makes me feel like im living in the future. Especaially since I'm using alexa's features I can also control the blinds with voice by tapping the side of my earbud!

<h2><em>⚙️ How it works ⚙️</em></h2>

&emsp;The program begins by including necessary libraries for controlling the servo motor and connecting to WiFi. It initializes a servo object to manage the blinds and sets a variable for the full rotation time of the servo.

&emsp;In the `setup()` function, the program establishes a connection to the specified WiFi network and waits until the connection is successful. Once connected, it registers a device with the Espalexa library, allowing it to respond to voice commands from Alexa.

&emsp;The `firstBlindChanged()` function is triggered when a command is received. It checks the brightness value sent by Alexa: if the value is greater than zero, the blinds are closed by rotating the servo counterclockwise; if the value is zero, the blinds are opened by rotating the servo clockwise. The servo rotates for the specified duration before stopping.

&emsp;The `loop()` function continuously processes incoming commands from Alexa, ensuring that the system remains responsive to user requests. Overall, this smart blind control program demonstrates the integration of IoT technology with everyday home automation, providing a practical solution for modern living.
