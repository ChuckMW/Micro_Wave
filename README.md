# Arduino Pro Micro – Multi-Channel Pulse Generator

This project transforms the **Arduino Pro Micro** into a **multi-channel pulse generator**. It outputs low-frequency, short-duration pulses on multiple pins (D3, D5, D6, D9). These pulses are ideal for triggering other devices or creating timing signals, such as **clock pulses** or **pulse-per-second (PPS)** signals.

## 🚀 Features

- **Four independent pulse channels** on D3, D5, D6, and D9.
- Adjustable **pulse frequency** for each pin (0.5 Hz to 5 Hz by default).
- Adjustable **pulse width** (10 ms by default).
- **Non-blocking code** with `millis()` for stable and continuous operation.
- **Easy customization** to change frequencies, pulse width, or add more channels.

## 🛠 Hardware Required

- **Arduino Pro Micro** (or any Leonardo-compatible board).
- USB cable for connecting to your computer.
- Optional: LEDs for visual feedback on pulse output, or an oscilloscope/logic analyzer to monitor the pulses.

## 💻 How to Use

1. Open the `multi_pulse_generator.ino` file in the [Arduino IDE](https://www.arduino.cc/en/software).
2. Connect the **Arduino Pro Micro** to your computer using the USB cable.
3. In the **Arduino IDE**:
   - Select **Tools > Board > Arduino Leonardo** (the Pro Micro uses the same architecture as the Leonardo).
   - Select the appropriate **COM port** under **Tools > Port**.
4. Click **Upload** to upload the code to the Pro Micro.
5. Optionally, attach **LEDs** to the output pins (D3, D5, D6, D9) to see the pulses visually.

## 📐 Default Pin Configuration

| Pin  | Frequency | Interval   | Pulse Width | Description                |
|------|-----------|------------|-------------|----------------------------|
| D3   | 0.5 Hz    | 2000 ms    | 10 ms       | 10 ms HIGH every 2 seconds |
| D5   | 1 Hz      | 1000 ms    | 10 ms       | 10 ms HIGH every 1 second  |
| D6   | 2 Hz      | 500 ms     | 10 ms       | 10 ms HIGH every 0.5 s     |
| D9   | 5 Hz      | 200 ms     | 10 ms       | 10 ms HIGH every 0.2 s     |

### Customizing the Frequencies and Pulse Width

The default frequencies and pulse widths are set in the code, and can be easily modified by changing a few values:

- **Frequencies:** Edit the `intervalX` values in milliseconds.
- **Pulse Width:** Change the `pulseWidth` variable to increase or decrease the pulse duration.

### Example Customization:
To change the frequency of Pin 1 (D3) to 1 Hz and set the pulse width to 20 ms, modify these lines:

```cpp
const unsigned long interval1 = 1000; // 1 Hz (1000 ms interval)
const unsigned long pulseWidth = 20;  // 20 ms pulse width
