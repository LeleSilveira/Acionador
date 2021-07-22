import serial
import time
import pyautogui
time.sleep(5)
ser= serial.Serial('COM3',9600)
time.sleep(1)
while 1:
  dado=int(ser.readline().decode().strip('\r\n'))
  if dado==1:
    print(dado)
    pyautogui.click()



