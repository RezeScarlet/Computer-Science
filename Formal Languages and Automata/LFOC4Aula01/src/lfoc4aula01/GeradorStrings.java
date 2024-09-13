package lfoc4aula01;

import java.io.FileDescriptor;
import java.io.FileOutputStream;
import java.io.PrintStream;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/**
 * Métodos para geração de strings de alfabetos.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class GeradorStrings {

  public static void main(String[] args) {

    System.setOut(new PrintStream(new FileOutputStream(FileDescriptor.out), true, StandardCharsets.UTF_8));
    System.setErr(new PrintStream(new FileOutputStream(FileDescriptor.err), true, StandardCharsets.UTF_8));

    int k = 3;
    char[] a = { '0', '1' };
    testeGerarStringsK(k, a);
    testeGerarStringsAteK(k, a);

  }

  public static List<String> gerarStringsK(int k, char... a) throws IllegalArgumentException {

    if (k < 0) {
      throw new IllegalArgumentException("comprimento negativo");
    }

    if (a == null || a.length == 0) {
      throw new IllegalArgumentException("alfabeto vazio");
    }

    List<String> s = new ArrayList<>();

    // Implementação...
    for (int i = 0; i < Math.pow(a.length, k); i++) {
      int iTemp = i;
      s.add("");
      for (int j = k - 1; j >= 0; j--) {
        s.set(i, a[iTemp % a.length] + s.get(i));
        iTemp /= a.length;
      }
    }

    return s;
  }

  public static List<String> gerarStringsAteK(int k, char... a) throws IllegalArgumentException {

    if (k < 0) {
      throw new IllegalArgumentException("comprimento negativo");
    }

    if (a == null || a.length == 0) {
      throw new IllegalArgumentException("alfabeto vazio");
    }

    List<String> s = new ArrayList<>();

    // implementação...
    for (int i = 1; i <= k; i++) {
      s.addAll(gerarStringsK(i, a)); 
    }
    return s;

  }

  private static void testeGerarStringsK(int k, char... a) throws IllegalArgumentException {

    for (int i = 0; i <= k; i++) {

      if (i == 0) {
        System.out.println("\u03A3^0 = {\u03B5}");
      } else {

        System.out.printf("\u03A3^%d = {", i);
        boolean primeiro = true;

        for (String s : gerarStringsK(i, a)) {
          if (!primeiro) {
            System.out.print(", ");
          }
          System.out.print(s);
          primeiro = false;
        }

        System.out.print("}");
        System.out.println();

      }

    }

  }

  private static void testeGerarStringsAteK(int k, char... a) throws IllegalArgumentException {

    System.out.print("\u03A3*  = {\u03B5, ");

    for (String s : gerarStringsAteK(k, a)) {
      System.out.print(s);
      System.out.print(", ");
    }

    System.out.print("...}");
    System.out.println();

  }

}
