from tkinter import *
import tkinter.font
from gpiozero import LED
import RPi.GPIO as gpio

gpio.setmode(gpio.BCM)

led1 = LED(4)
led2 = LED(23)
led3 = LED(25)

screen = Tk()
screen.title("LED GUI")

def green_toggle():
    if led2.is_lit:
        led2.off()
        btn1["text"] = "off"
    else:
        led2.on()
        btn1["text"] = "on"

def red_toggle():
    if led3.is_lit:
        led3.off()
        btn2["text"] = "off"
    else:
        led3.on()
        btn2["text"] = "on"

        
def yellow_toggle():
    if led1.is_lit:
        led1.off()
        btn3["text"] = "off"
    else:
        led1.on()
        btn3["text"] = "on"

btn1 = Button(screen,text = "off", command = green_toggle,bg = 'green',height = 2,width =24)
btn1.grid(row=0,column=1,padx=12,pady=6)

btn2 = Button(screen,text = "off", command = red_toggle,bg = 'red',height = 2,width =24)
btn2.grid(row=1,column=1,pady=6)

btn3 = Button(screen,text = "off", command = yellow_toggle,bg = 'yellow',height = 2,width =24)
btn3.grid(row=2,column=1,pady=6)

quit_btn = Button(screen,text = "quit", command = screen.destroy,bg = 'blue',height = 2,width =12)

quit_btn.grid(row=3,column=1,pady=6)
