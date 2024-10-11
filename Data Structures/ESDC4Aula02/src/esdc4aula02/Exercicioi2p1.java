package esdc4aula02;

import java.util.Stack;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Resolução do Exercício i2.1
 *
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi2p1 {

    /**
     * Verifica se uma expressão composta por pares de símbolos arbitrários está
     * balanceada.
     *
     * @param expression A expressão a ser verificada.
     * @param pairs Um conjunto de caracteres em que cada dois representam um
     * par de caracteres usados na verificação.
     * @return Se a expressão está balanceada.
     * @throws IllegalArgumentException Caso os pares forem fornecidos de forma
     * errada, ou seja, se houver uma quantidade ímpar de elementos, faltando
     * assim a dupla de fechamento de um par.
     */
    public static boolean isBalanced(String expression, char... pairs)
            throws IllegalArgumentException {

        // implementação
        if (pairs.length % 2 != 0) {
            throw new IllegalArgumentException("Os pares de caracteres estão incorretos.");
        }

        Stack<Character> stack = new Stack<>();
        for (char c : expression.toCharArray()) {
            boolean isOpening = false;
            for (int i = 0; i < pairs.length; i += 2) {
                if (c == pairs[i]) {
                    stack.push(c);
                    isOpening = true;
                    break;
                }
            }
            if (!isOpening) {
                if (stack.isEmpty()) {
                    return false;
                }
                boolean matched = false;
                for (int i = 1; i < pairs.length; i += 2) {
                    if (c == pairs[i] && stack.peek() == pairs[i - 1]) {
                        matched = true;
                        stack.pop();
                        break;
                    }
                }
                if (!matched) {
                    return false;
                }

            }

        }
        return stack.isEmpty();
    }

}
