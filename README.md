## Mini-Home-Assistant-Display
A compact, ESP-powered interface designed to bridge the gap between your smart home data and your physical space. This sleek device provides real-time statistics and status updates for your Home Assistant ecosystem while offering tactile control over lighting. Depending on your choice of core, it functions seamlessly over Wi-Fi or leverages Zigbee for low-power mesh reliability. It is specifically optimized for the Seeed Studio XIAO ESP32-C3 (Wi-Fi/BLE) or the XIAO ESP32-C6 (Matter/Zigbee/Thread).
<img width="699" height="549" alt="Screenshot 2026-03-13 at 1 11 27 pm" src="https://github.com/user-attachments/assets/cd93a5b4-264d-46e4-b1d7-6cb2909183c1" />

### About
The Mini-Home-Assistant-Display is an affordable, DIY-friendly solution for localized smart home control, coming in at an estimated build cost of $15–$25 USD. This project is fully open-source; I encourage you to remix the enclosure, tweak the firmware, and share your versions with the community. If you feature this build in a video or blog, a link back to the project and a shout-out would be greatly appreciated!

The assembly is intentionally straightforward, requiring only basic soldering skills to connect the display and power lines. Designed to be powered by a standard 5W USB brick, it can be tucked onto a bookshelf, mounted to a bedside table, or adhered to a wall using the integrated mounting channels.
<img width="401" height="279" alt="Screenshot 2026-03-13 at 1 43 11 pm" src="https://github.com/user-attachments/assets/4774f455-aa34-4d36-8f5a-a046946c1993" />

### Design Philosophy
The aesthetic goal was minimalist utility. Smart home tech shouldn't scream for attention; it should provide information only when you need it. The result is a clean, contemporarary small-box design that blends into any modern interior.

We addressed the "cable clutter" issue by making the form factor as slim as possible, allowing it to sit smoothly and cleanly on desks. By utilizing the ESP32-C6, the device can act as a native Zigbee or Thread node, reducing the need for high-bandwidth Wi-Fi and allowing for more stable, long-distance communication within your home’s mesh network.

### Future Improvements
While the current iteration is stable, there is always room for evolution:

Haptics: Adding a small vibration motor or piezo buzzer for tactile feedback when toggling lights.

Power Efficiency: Optimizing the LVGL (Light and Versatile Graphics Library) code to allow for longer deep-sleep intervals if running on a small LiPo battery.

### BOM

| NAME | PURPOSE | QTY | TOTAL (USD) | LINK | DISTRIBUTOR |
| :--- | :------ | :-: | :---------- | :--- | :---------- |
| Button | to press for quick controls | 1 | $2.61 | [Link to Listing](https://www.digikey.com.au/en/products/detail/adafruit-industries-llc/367/10669771) | DIGIKEY |
| 4" Display | To display the statistics | 1 | $12.75 | [Link to Listing](https://www.aliexpress.com/item/1005005791515997.html) | Aliexpress |
| Microcontroller | Micro controller: to control the crseen | 1 | $5.22 | [Link to Listing](https://www.digikey.com.au/en/products/detail/seeed-technology-co-ltd/113991054/16652880) | DigiKey |
