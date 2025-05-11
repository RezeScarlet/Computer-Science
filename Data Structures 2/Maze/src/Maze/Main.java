package Maze;

import br.com.davidbuzatto.jsge.core.engine.EngineFrame;
import java.util.ArrayList;

public class Main extends EngineFrame {

  int[][] mazeGrid;
  int[][] visited;
  ArrayList<int[][]> steps;
  int beginL;
  int beginC;
  int endL;
  int endC;
  int pos;

  private double timeToPlay;
  private double counter;

  public Main() {

    super(
        500,
        500,
        "Window Title",
        60,
        true);

  }

  @Override
  public void create() {
    steps = new ArrayList<>();

    mazeGrid = new int[][] {
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 2, 0, 0, 1, 0, 0, 0, 0, 1 },
        { 1, 0, 1, 0, 1, 0, 1, 1, 0, 1 },
        { 1, 0, 1, 0, 0, 0, 1, 3, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 0, 1, 0, 1 },
        { 1, 0, 0, 0, 1, 1, 0, 1, 0, 1 },
        { 1, 1, 1, 0, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
    };

    visited = new int[10][10];

    for (int i = 0; i < mazeGrid.length; i++) {
      for (int j = 0; j < mazeGrid[i].length; j++) {
        if (mazeGrid[i][j] == 2) { // 2 for spawn
          beginL = i;
          beginC = j;
        }
        if (mazeGrid[i][j] == 3) { // 3 for end
          endL = i;
          endC = j;
        }
      }
    }

    move(beginL, beginC, endL, endC);
    pos = 0;
    timeToPlay = 0.3;

  }

  @Override
  public void update(double delta) {
    counter += delta;

    if (counter > timeToPlay) {
      counter = 0;
      pos++;
    }
    if (pos >= steps.size()) {
      pos = 0;

    }
  }

  @Override
  public void draw() {
    clearBackground(WHITE);
    for (int i = 0; i < mazeGrid.length; i++) {
      for (int j = 0; j < mazeGrid[i].length; j++) {
        switch (mazeGrid[i][j]) {
          case 0 -> drawRectangle(50 * j, 50 * i, 50, 50, BLACK);
          case 1 -> fillRectangle(50 * j, 50 * i, 50, 50, BLACK);
          case 2 -> {
            drawRectangle(50 * j, 50 * i, 50, 50, BLACK);
          }
          case 3 -> {
            fillRectangle(50 * j, 50 * i, 50, 50, BLUE);
          }
        }
      }
    }

    drawPath(steps.get(pos));
  }

  private boolean move(int lineOrigin, int columnOrigin, int lineEnd, int columnEnd) {
    if (validate(lineOrigin, columnOrigin)) {
      visited[lineOrigin][columnOrigin] = 1;
      steps.add(copyMatrix(visited));

      // End recursion
      if (lineOrigin == lineEnd && columnOrigin == columnEnd) {
        return true;
      }

      // Down
      if (move(lineOrigin + 1, columnOrigin, lineEnd, columnEnd)) {
        return true;
      }
      // Right
      if (move(lineOrigin, columnOrigin + 1, lineEnd, columnEnd)) {
        return true;
      }


      // Left
      if (move(lineOrigin, columnOrigin - 1, lineEnd, columnEnd)) {
        return true;
      }

      // Up
      if (move(lineOrigin - 1, columnOrigin, lineEnd, columnEnd)) {
        return true;
      }

    }
    return false;
  }

  private boolean validate(int line, int column) {
    return line >= 0 &&
        line < mazeGrid.length &&
        column >= 0 &&
        column < mazeGrid[line].length &&
        mazeGrid[line][column] != 1 &&
        visited[line][column] != 1;
  }

  private int[][] copyMatrix(int[][] original) {
    int rows = original.length;
    int cols = original[0].length;
    int[][] copy = new int[rows][cols];

    for (int i = 0; i < rows; i++) {
      System.arraycopy(original[i], 0, copy[i], 0, cols);
    }

    return copy;
  }

  private void drawPath(int[][] path) {
    for (int i = 0; i < path.length; i++) {
      for (int j = 0; j < path[i].length; j++) {
        switch (path[i][j]) {
          case 1 -> fillRectangle(50 * j, 50 * i, 50, 50, PINK);
        }
      }
    }
  }

  public static void main(String[] args) {
    new Main();
  }

}
