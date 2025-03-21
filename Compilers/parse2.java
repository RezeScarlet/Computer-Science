class parse2 {

  public static int parse2(String expressao) {
    int y = 0;
    String[] expressaoArray = expressao.split("\\s+");
    int x = Integer.parseInt(expressaoArray[0]);
    y = Integer.parseInt(expressaoArray[2]);
    String operator = expressaoArray[1];
    switch (operator) {
      case "+":
        y = x + y;

      case "-":
        y = x - y;

      case "*":
        y = x * y;

      case "/":
        y = x / y;

    }

    for (int i = 3; i < expressaoArray.length; i += 2) {
      x = Integer.parseInt(expressaoArray[i+1]);
      operator = expressaoArray[i];
      switch (operator) {
        case "+":
          y = y + x;

        case "-":
          y = y - x;

        case "*":
          y = y * x;

        case "/":
          y = y / x;

      }
    }
    return y;
  }

  public static void main(String[] args) {
    int x = parse2("1 + 10 - 5 / 10 * 90");
    System.out.println(x);
  }
}
