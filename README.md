# arduinoSensorTransmit
packs up data from eight 10-bit sensors on Arduino to be send to Pure Data

1st byte = analog 0 - 7 & the multiplier
2nd byte = cooked down bit value

Sends byte 2 first 



1st byte ranges for analog inputs:

128 = 0
144 = 1
160 = 2
176 = 3
192 = 4
208 = 5
224 = 6
240 = 7