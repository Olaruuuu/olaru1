import random
import tkinter as tk
import pyautogui
x = 1400
cycle = 0
check = 1
event_number = random.randrange(1,3,1)
impath = 'C:/Users/olaru/Desktop/pet/'

def event(cycle,check,event_number,x):
  check = 0
  print('idle')
  window.after(400,update,cycle,check,event_number,x)
def update(cycle, check, event_number,x):
    frame = idle[cycle]
    #cycle, event_number = gif_work(cycle, idle, event_number, 1,9)
    


window = tk.Tk()
idle = [tk.PhotoImage(file=impath+'idle.gif',format = 'gif -index %i' %(i)) for i in range(5)]#idle gif

window.config(highlightbackground='black')
label = tk.Label(window, bd=2, bg ='black')
window.overrideredirect(True)
window.wm_attributes('-transparentcolor', 'black')

label.pack()
window.after(1,event,cycle,check,event_number,x)
#window.after(1,update,cycle,check,event_number,x)
window.mainloop()
