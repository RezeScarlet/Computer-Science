import tkinter as tk
import math

x_cat = 0
y_cat = 0
dim = 25

x_rat = 400
y_rat = 300


def drawCat():
    canvas.delete("cat")
    canvas.create_oval(
        x_cat,
        y_cat,
        x_cat + dim,
        y_cat + dim,
        fill="yellow",
        outline="yellow",
        tags="cat",
    )


def drawRat():
    canvas.delete("rat")
    canvas.create_oval(
        x_rat, y_rat, x_rat + dim, y_rat + dim, fill="red", outline="red", tags="rat"
    )


def moveCat():
    global x_cat
    global y_cat
    # if x_cat <= 500 - dim:
    #     x_cat += 5

    if x_rat > x_cat:
        x_cat += 5
    if y_rat > y_cat:
        y_cat += 5

    if x_rat < x_cat:
        x_cat -= 5
    if y_rat < y_cat:
        y_cat -= 5

def moveRat():
    import random as rand

    x_rand = rand.randint(-10, 10)
    y_rand = rand.randint(-10, 10)
    global x_rat, y_rat
    x_rat += x_rand
    y_rat += y_rand


def play():
    """Desenha e move os objetos na tela"""
    drawCat()
    drawRat()
    moveCat()
    moveRat()
    root.after(100, play)  # Chama novamente após 100ms

    distancia = math.sqrt(pow(x_rat - x_cat, 2) + pow(x_rat - x_cat, 2))
    print(distancia)


if __name__ == "__main__":

    root = tk.Tk()
    root.title("Agent")
    canvas = tk.Canvas(root, width=500, height=500, bg="black")
    canvas.pack()
    play()
    root.mainloop()
