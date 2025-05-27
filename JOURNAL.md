---
title: "BitPhoton"
author: "Ramon de Leon"
description: "An IOT, WiFi, BLE, CAN and PLC-Like light sensor for the BitBot Automation ecosystem"
created_at: "2024-05-24"
---

# Pre-2025 Foreword 
In the past year I had done some work, getting this sensor to report properly, build the firmware and prototyped it on a breadboard, it worked properly (for the most part)
(Images in readme)

Time spent: ~20hrs

# May 24th: Started PCB design
Currently my plan is to make it the smallest it can be and use those pre-made aliexpress modules for the sensor and can module to reduce complexity, the biggest challenge right now i think would be the battery but so far i think it's going fine, a small concern i have is the microcontroller, although if im able to use an esp32c3 supermini or a xiao esp32c3 that would help a loooot, since it also has a charging circuit (i think) but i'll have to look into it, for now the plan is to make it as simple as it can posibly be to manufacture because i want the software to be my main focus so it's as intuitive as it can be, (it'll also be by far the hardest part hahaha)

![Started PCB Design](https://github.com/user-attachments/assets/c6fd79a8-a76c-4122-aba9-b41addc96a1d)

Time spent: ~2hrs

# May 26th: New smaller prototype
I got to building a new smaller prototype (still on a breadboard) but i compacted it to the least amount of components needed to function properly

I'm having some problems with the CAN behavior, I'll have to troubleshoot it but for now, I'll mostly be looking at hardware and making the PCB as easy to assemble as possible

![New prototype](assets/proto2.png)

Time spent: ~2hrs

