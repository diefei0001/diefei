import turtle

def draw_polygon(sides, size):
    angle = 360 / sides
    for _ in range(sides):
        turtle.forward(size)
        turtle.right(angle)

# 绘制一个旋转的多边形
for rotation in range(0, 360, 30):  # 每次旋转 30 度
    turtle.seth(rotation)
    draw_polygon(6, 50)  # 六边形

turtle.done()

     


        