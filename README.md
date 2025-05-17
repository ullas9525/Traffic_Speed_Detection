🚦 Traffic Speed Detection with Arduino + IR Sensors
This project uses an Arduino and two IR sensors to measure the speed of a moving object (like a toy car) by calculating the time it takes to pass between the two sensors. Simple setup, solid logic, and a cool way to visualize basic physics.

🧠 What’s Happening Here?
Two IR sensors are placed 42 cm apart. When an object breaks the first beam, a timer starts. When it crosses the second, the timer stops. Using the time difference and fixed distance, we calculate the speed and convert it to km/h.

plaintext
Copy
Edit
Speed = (Distance / Time) × 3.6

🛠️ Hardware Required

Arduino UNO (or compatible)!

2x IR Sensor Modules
Breadboard + Jumper Wires
USB Cable (for power & programming)

A small moving object (like a toy car or ball)

⚙️ Setup Diagram
[Block Diagram](https://github.com/user-attachments/assets/aa5fe390-3930-409c-999f-1c827e735e7c)  

💬 Why This Is Cool
Helps understand real-world physics with sensors
