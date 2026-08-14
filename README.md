# Drone Remote ID Reader Samples

This repository provides sample applications for receiving and decoding Drone Remote ID (DRI) broadcasts on Windows using the [Bluetooth Framework](https://www.btframework.com/bluetoothframework.htm) and [Wi-Fi Framework](https://www.btframework.com/wififramework.htm). The samples are available in **Delphi**, **C++Builder**, **C++**, **VB.NET**, and **C#**.

## What is DRI

Drone Remote ID acts as a digital license plate for drones, broadcasting identification and telemetry such as unique ID, position, altitude, speed, heading, and operator location via Bluetooth Low Energy and Wi-Fi beacons. The frameworks handle scanning, message reassembly, and parsing according to ASTM F3411 (US) and ASD-STAN prEN 4709-002 (EU) standards, delivering structured drone data to your application. You can find more about Drone Remote ID on [our site](https://www.btframework.com/droneremoteid.htm).  

This sample provides a ready-to-run starting point for building drone monitoring, fleet tracking, public safety, and airspace awareness applications on Windows.  

Please do not hesitate to [contact us](https://www.btframework.com/contacts.htm) if you have any questions.  

## Build configuration

### .NET
.NET Framework 4.0, Visual Studio 2022  

### C++
Visual Studio 2022, SDK 10.0.22000, Toolset v143  

### VCL
RAD Studio (Delphi/CBuilder) 10  
