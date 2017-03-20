# This is my readme file
Raspberry Pi acoustic sensor project

This project will turn a raspberry Pi 3 into a acoustic sensor.

1. Configuration

A raspberry Pi 3 is recommended. If a older version of Pi is used, corresponding configuration might be changed.

The Pi is mounted with a USB sound card, and plugged in a microphone.

It is recommend to have Ethernet connection for you Pi.

1.1 Software configuration

The USB sound card has to be set as default audio device. To do so, you need to modify two files with following contents.

......

If you are using Raspbian Jessie, you have to roll back alsa-utils to a early version.
.....


