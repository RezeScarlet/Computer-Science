class parse {

  public static int parse(String expressao) {
    int result;
    String[] expressaoArray = expressao.split("\\s+");
    int x = Integer.parseInt(expressaoArray[0]);
    int y = Integer.parseInt(expressaoArray[2]);
    String operator = expressaoArray[1];
    switch (operator) {
      case "+":
        return x + y;

      case "-":
        return x - y;

      case "*":
        return x * y;

      case "/":
        return x / y;

      default:
        return 0;
    }
  }

  public static void main(String[] args) {
    int x = parse("1 + 10");
    System.out.println(x);
  }
}
