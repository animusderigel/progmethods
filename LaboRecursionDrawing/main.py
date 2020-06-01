import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()


def drawSpiral(myTurtle, lineLen):
    if lineLen > 0:
        myTurtle.forward(lineLen)
        myTurtle.right(90)
        drawSpiral(myTurtle, lineLen - 5)


num_iter = int(input('How much iterations you want to do?'))
myTurtle.penup()
myTurtle.setposition(-256, 256)
myTurtle.pendown()
drawSpiral(myTurtle, 20 * num_iter)
myWin.exitonclick()
