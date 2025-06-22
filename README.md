# Smart IoT Garbage System

An intelligent, contactless waste management solution using Arduino, IR sensors, and servo motor automation. This project demonstrates a low-cost, scalable, and energy-efficient smart dustbin system designed to improve hygiene and reduce human interaction with waste disposal processes.

## 📘 Project Overview

As urban population and waste generation grow, traditional garbage disposal systems face challenges in hygiene, efficiency, and responsiveness. This project proposes a smart garbage bin that automatically opens its lid upon detecting nearby motion—eliminating the need for physical contact.

## 🧠 Key Features

- **Contactless Operation** – IR sensor detects hand/object motion
- **Arduino-Based Control** – Microcontroller processes signals
- **Relay Switching** – Ensures safe current control to servo motor
- **Servo Motor Actuation** – Lid opens/closes automatically
- **Energy Efficient** – Motor powered only during active use
- **Compact Design** – Minimal wiring and optimized space usage

## 🛠️ Working Principle

1. IR sensor detects object within 10–15 cm range.
2. Arduino processes the input and sends a HIGH signal to the relay.
3. Relay powers the servo motor.
4. Motor rotates to open the lid.
5. After a short delay, the lid closes automatically.

## ✅ Results

- Quick detection and response time (2–3 seconds)
- Stable and consistent performance
- Minimal false triggers and low power consumption
