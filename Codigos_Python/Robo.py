import time
import math
from ev3dev2.motor import *
from ev3dev2.sound import Sound
from ev3dev2.button import Button
from ev3dev2.sensor import *
from ev3dev2.sensor.lego import *
from ev3dev2.sensor.virtual import *

# Create the sensors and motors objects
motorA = LargeMotor(OUTPUT_A)
motorB = LargeMotor(OUTPUT_B)
left_motor = motorA
right_motor = motorB
tank_drive = MoveTank(OUTPUT_A, OUTPUT_B)
steering_drive = MoveSteering(OUTPUT_A, OUTPUT_B)

spkr = Sound()
btn = Button()
radio = Radio()
obtr = ObjectTracker()

color_sensor_in1 = ColorSensor(INPUT_1)
ultrasonic_sensor_in2 = UltrasonicSensor(INPUT_2)
gyro_sensor_in3 = GyroSensor(INPUT_3)
gps_sensor_in4 = GPSSensor(INPUT_4)
pen_in5 = Pen(INPUT_5)

motorC = LargeMotor(OUTPUT_C) # Magnet

# Here is where your code starts

for count in range(2):
    steering_drive.on_for_rotations((-65), 30, 1)
    steering_drive.on_for_rotations(25, 30, 5)
    steering_drive.on_for_rotations((-65), 30, 1)
    tank_drive.on_for_rotations(30, 30, 2.7)
tank_drive.on_for_rotations(30, 30, 0.7)
steering_drive.on_for_rotations((-65), 30, 1)
steering_drive.on_for_rotations(25, 30, 5.5)
steering_drive.on_for_rotations((-65), 30, 1.15)
tank_drive.on_for_rotations(30, 30, 3.5)
