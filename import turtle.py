import turtle
import colorsys
t=turtle.Turtle()
s=turtle.Screen().bgcolor('blue')
t.speed
n=70
h=0
for i in range (360):
    c=colorsys.hls_to_rgb(h,1,0.8)
    h+=1/n
    t.color(c)
    t.left(1)
    