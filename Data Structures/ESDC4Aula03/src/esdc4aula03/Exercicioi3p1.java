/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula03;

import aesd.ds.implementations.linear.LinkedQueue;
import aesd.ds.interfaces.Queue;
import java.util.Arrays;

/**
 * Resolução do Exercício i3.1
 * 
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi3p1 {

  /**
   * A partir da quantidade n de pessoas e de uma posição m, deve gerar um
   * array de inteiros com a ordem em que as pessoas serão eliminadas,
   * contendo assim, em sua última posição, o lugar aonde Josefo deveria se
   * sentar.
   * 
   * @param n A quantidade de pessoas.
   * @param m A posição da pessoa que será eliminada.
   * @return Um array de inteiros com a ordem em que as pessoas serão eliminadas.
   * @throws IllegalArgumentException Caso n ou m não sejam inteiros positivos.
   */
  public static int[] josephus(int n, int m)
      throws IllegalArgumentException {

    if (n <= 0 || m <= 0) {
      throw new IllegalArgumentException("n and m must be positive integers");
    }

    int[] ordem = new int[n];

    // implementação

    LinkedQueue<Integer> people = new LinkedQueue<>();

    for (Integer i = 0; i < n; i++) {
      people.enqueue(i);
    }

    while (!people.isEmpty()) {
      for (int j = 1; j < m; j++) {
        people.enqueue(people.dequeue());
      }

      ordem[n - people.getSize()] = people.dequeue();

    }

    return ordem;

  }

}
