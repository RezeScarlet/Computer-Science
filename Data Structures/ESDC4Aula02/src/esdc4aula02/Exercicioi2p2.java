/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula02;

import java.util.Stack;

/**
 * Resolução do Exercício i2.2
 *
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi2p2 {

    /**
     * Converte uma expressão aritmética pré-fixada para infixa.
     *
     * Algoritmo: - Processe a expressão pré-fixada em ordem inversa (direita
     * para esquerda); - Se o token for um operando, empilhe-o; - Se o token for
     * um operador, desempilhe dois operandos da pilha e crie uma string
     * concatenando-os na forma: infix = "( " + operando1 + operador + operando2
     * + " )" e empilhe essa string. - Repita até o fim da expressão pré-fixada.
     * - A expressão infixa estará no topo da pilha ao fim do processo.
     *
     * @param prefix A expressão pré-fixada.
     * @return A expressão infixa correspondente.
     * @throws IllegalArgumentException Caso a expressão seja inválida, ou seja,
     * quando no processo de análise alguma operação peek ou pop lançar uma
     * EmptyStackException.
     */
    public static String prefixToInfix(String prefix) throws IllegalArgumentException {

        // implementação
        Stack<String> stack = new Stack<>();

        String[] tokens = prefix.split(" ");

        for (int i = tokens.length - 1; i >= 0; i--) {
            String token = tokens[i];

            if (isOperand(token)) {
                stack.push(token);
            } else if (isOperator(token)) {
                if (stack.size() < 2) {
                    throw new IllegalArgumentException("Expressao pre-fixada invalida.");
                }

                String operand1 = stack.pop();
                String operand2 = stack.pop();
                String infix = "( " + operand1 + " " + token + " " + operand2 + " )";

                stack.push(infix);
            } else {
                throw new IllegalArgumentException("Token invalido na expressao: " + token);
            }
        }

        if (stack.size() != 1) {
            throw new IllegalArgumentException("Expressao pre-fixada invalida.");
        }

        return stack.pop();

    }

    /**
     * Converte uma expressão aritmética pré-fixada para pós-fixada.
     *
     * Algoritmo: - Processe a expressão pré-fixada em ordem inversa (direita
     * para esquerda); - Se o token for um operando, empilhe-o; - Se o token for
     * um operador, desempilhe dois operandos da pilha e crie uma string
     * concatenando-os na forma: postfix = operando1 + operando2 + operador e
     * empilhe essa string. - Repita até o fim da expressão pré-fixada. - A
     * expressão pós-fixada estará no topo da pilha ao fim do processo.
     *
     * @param prefix A expressão pré-fixada.
     * @return A expressão pós-fixada correspondente.
     * @throws IllegalArgumentException Caso a expressão seja inválida, ou seja,
     * quando no processo de análise alguma operação peek ou pop lançar uma
     * EmptyStackException.
     */
    public static String prefixToPostfix(String prefix) throws IllegalArgumentException {

        // implementação
        Stack<String> stack = new Stack<>();

        String[] tokens = prefix.split(" ");

        for (int i = tokens.length - 1; i >= 0; i--) {
            String token = tokens[i];

            if (isOperand(token)) {
                stack.push(token);
            } else if (isOperator(token)) {
                if (stack.size() < 2) {
                    throw new IllegalArgumentException("Expressao pre-fixada invalida.");
                }

                String operand1 = stack.pop();
                String operand2 = stack.pop();
                String postfix = operand1 + " " + operand2 + " " + token;

                stack.push(postfix);
            } else {
                throw new IllegalArgumentException("Token invalido na expressao: " + token);
            }
        }

        if (stack.size() != 1) {
            throw new IllegalArgumentException("Expressao pre-fixada invalida.");
        }

        return stack.pop();

    }

    /**
     * Converte uma expressão aritmética pós-fixada para infixa.
     *
     * Algoritmo: - Processe a expressão pós-fixada da esquerda para a direita;
     * - Se o token for um operando, empilhe-o; - Se o token for um operador,
     * desempilhe dois operandos da pilha e crie uma string concatenando-os na
     * forma: infix = "( " + operando2 + operador + operando1 + " )" e empilhe
     * essa string. - Repita até o fim da expressão pós-fixada. - A expressão
     * infixa estará no topo da pilha ao fim do processo.
     *
     * @param postfix A expressão pós-fixada.
     * @return A expressão infixa correspondente.
     * @throws IllegalArgumentException Caso a expressão seja inválida, ou seja,
     * quando no processo de análise alguma operação peek ou pop lançar uma
     * EmptyStackException.
     */
    public static String postfixToInfix(String postfix) throws IllegalArgumentException {

        // implementação
        Stack<String> stack = new Stack<>();

        String[] tokens = postfix.split(" ");

        for (String token : tokens) {

            if (isOperand(token)) {
                stack.push(token);
            } else if (isOperator(token)) {
                if (stack.size() < 2) {
                    throw new IllegalArgumentException("Expressao pos-fixada invalida.");
                }

                String operand1 = stack.pop();
                String operand2 = stack.pop();
                String infix = "( " + operand2 + " " + token + " " + operand1 + " )";

                stack.push(infix);
            } else {
                throw new IllegalArgumentException("Token invalido na expressao: " + token);
            }
        }

        if (stack.size() != 1) {
            throw new IllegalArgumentException("Expressao pos-fixada invalida.");
        }

        return stack.pop();

    }

    /**
     * Converte uma expressão aritmética pós-fixada para pré-fixada.
     *
     * Algoritmo: - Processe a expressão pós-fixada da esquerda para a direita;
     * - Se o token for um operando, empilhe-o; - Se o token for um operador,
     * desempilhe dois operandos da pilha e crie uma string concatenando-os na
     * forma: prefix = operador + operando2 + operando1 e empilhe essa string. -
     * Repita até o fim da expressão pós-fixada. - A expressão pré-fixada estará
     * no topo da pilha ao fim do processo.
     *
     * @param postfix A expressão pós-fixada.
     * @return A expressão pré-fixada correspondente.
     * @throws IllegalArgumentException Caso a expressão seja inválida, ou seja,
     * quando no processo de análise alguma operação peek ou pop lançar uma
     * EmptyStackException.
     */
    public static String postfixToPrefix(String postfix) throws IllegalArgumentException {

        // implementação
        Stack<String> stack = new Stack<>();

        String[] tokens = postfix.split(" ");

        for (String token : tokens) {

            if (isOperand(token)) {
                stack.push(token);
            } else if (isOperator(token)) {
                if (stack.size() < 2) {
                    throw new IllegalArgumentException("Expressao pos-fixada invalida.");
                }

                String operand1 = stack.pop();
                String operand2 = stack.pop();
                String prefix = token + " " + operand2 + " " + operand1;

                stack.push(prefix);
            } else {
                throw new IllegalArgumentException("Token invalido na expressao: " + token);
            }
        }

        if (stack.size() != 1) {
            throw new IllegalArgumentException("Expressao pos-fixada invalida.");
        }

        return stack.pop();

    }

    /**
     * Converte uma expressão aritmética infixa para pré-fixada.
     *
     * Algoritmo: - Converta a expressão infixa para pós-fixada; - Use a
     * expressão pós-fixada resultante para convertê-la em pré-fixada,
     * retornando o resultado.
     *
     * @param infix A expressão infixa.
     * @return A expressão pré-fixada correspondente.
     * @throws IllegalArgumentException Caso a expressão seja inválida, ou seja,
     * quando no processo de análise alguma operação peek ou pop lançar uma
     * EmptyStackException. Nesse caso a exceção será lançada pelos métodos
     * invocados.
     */
    public static String infixToPrefix(String infix) throws IllegalArgumentException {

        // implementação
        // Converte infix para postfix
        String postfix = infixToPostfix(infix);
        // Converte postfix para prefix
        return postfixToPrefix(postfix);
    }

    /**
     * Converte uma expressão aritmética infixa para pós-fixada.
     *
     * Algoritmo: - Processe a expressão infixa da esquerda para a direita; - Se
     * o token for um operando, concatene-o à expressão pós-fixada que está
     * sendo gerada, mais um espaço; - Se o token for um parêntese esquerdo,
     * empilhe-o; - Se o token for um parêntese direito: - Enquanto a pilha não
     * estiver vazia e o topo da pilha não for um parêntese esquerdo, desempilhe
     * o topo e concatene-o à expressão pós-fixada que está sendo gerada, mais
     * um espaço; - Após o enquanto, desempilhe o topo da pilha, descartando-o;
     * - Se o token for um operador: - Enquanto a pilha não estiver vazia e a
     * precedência do token for menor ou igual à precedência do topo da pilha,
     * desempilhe o topo e se o que foi desempilhado for um operador,
     * concatene-o à expressão pós-fixada que está sendo gerada, mais um espaço;
     * - Após o enquanto, empilhe o token.
     *
     * Após o processamento de todos os tokens é preciso lidar com o que sobrou
     * na pilha. Sendo assim:
     *
     * - Enquanto a pilha não estiver vazia: - Desempilhe o topo da pilha e, se
     * ele for um parênteses esquerdo, a expressão é inválida, então lance uma
     * exceção do tipo IllegalArgumentException. Caso contrário, verifique se o
     * que foi desempilhado é um operador. Se for, concatene-o à expressão
     * pós-fixada que está sendo gerada, mais um espaço;
     *
     * A expressão pós-fixada estará pronta na estrutura em que você está
     * armazenando a geração.
     *
     * @param infix A expressão infixa.
     * @return A expressão pós-fixada correspondente.
     * @throws IllegalArgumentException Caso a expressão seja inválida, ou seja,
     * quando no processo de análise alguma operação peek ou pop lançar uma
     * EmptyStackException ou se sobrar algum parêntese esquerdo na pilha no
     * final do processo de análise.
     */
    public static String infixToPostfix(String infix) throws IllegalArgumentException {

        // implementação
        Stack<String> stack = new Stack<>();
        StringBuilder postfix = new StringBuilder();
        String[] tokens = infix.split(" ");

        for (String token : tokens) {
            if (isOperand(token)) {
                postfix.append(token).append(" ");
            } else if (token.equals("(")) {
                stack.push(token);
            } else if (token.equals(")")) {
                while (!stack.isEmpty() && !stack.peek().equals("(")) {
                    postfix.append(stack.pop()).append(" ");
                }
                if (stack.isEmpty() || !stack.pop().equals("(")) {
                    throw new IllegalArgumentException("Expressao invalida: parenteis desbalanceados.");
                }
            } else if (isOperator(token)) {
                while (!stack.isEmpty() && getPrecedence(token) <= getPrecedence(stack.peek())) {
                    postfix.append(stack.pop()).append(" ");
                }
                stack.push(token);
            } else {
                throw new IllegalArgumentException("Token invalido na expressao: " + token);
            }
        }

        while (!stack.isEmpty()) {
            String top = stack.pop();
            if (top.equals("(")) {
                throw new IllegalArgumentException("Expressao invalida: parenteis desbalanceados.");
            }
            postfix.append(top).append(" ");
        }

        return postfix.toString().trim();
    }

    /**
     * Verifica se um token é um parênteses esquerdo.
     *
     * @param token Token a ser verificado.
     * @return Verdadeiro caso o token seja um parênteses esquerdo, falso caso
     * contrário.
     */
    public static boolean isLeftParenthesis(char token) {
        return token == '(';
    }

    /**
     * Verifica se um token é um parênteses esquerdo.
     *
     * @param token Token a ser verificado.
     * @return Verdadeiro caso o token seja um parênteses esquerdo, falso caso
     * contrário.
     */
    public static boolean isLeftParenthesis(String token) {
        return isLeftParenthesis(token.charAt(0));
    }

    /**
     * Verifica se um token é um parênteses direito.
     *
     * @param token Token a ser verificado.
     * @return Verdadeiro caso o token seja um parênteses direito, falso caso
     * contrário.
     */
    public static boolean isRightParenthesis(char token) {
        return token == ')';
    }

    /**
     * Verifica se um token é um parênteses direito.
     *
     * @param token Token a ser verificado.
     * @return Verdadeiro caso o token seja um parênteses direito, falso caso
     * contrário.
     */
    public static boolean isRightParenthesis(String token) {
        return isRightParenthesis(token.charAt(0));
    }

    /**
     * Verifica se um token é um operando.
     *
     * @param token Token a ser verificado.
     * @return Verdadeiro caso o token seja um operando, falso caso contrário.
     */
    public static boolean isOperand(char token) {
        return token >= '0' && token <= '9'/* || 
               token >= 'A' && token <= 'Z' ||
               token >= 'a' && token <= 'z'*/;
    }

    /**
     * Verifica se um token é um operando.
     *
     * @param token Token a ser verificado.
     * @return Verdadeiro caso o token seja um operando, falso caso contrário.
     */
    public static boolean isOperand(String token) {
        return isOperand(token.charAt(0));
    }

    /**
     * Verifica se um token é um operador.
     *
     * @param token Token a ser verificado.
     * @return Verdadeiro caso o token seja um operador, falso caso contrário.
     */
    public static boolean isOperator(char token) {
        switch (token) {
            case '+':
            case '-':
            case '*':
            case '/':
                return true;
            default:
                return false;
        }
    }

    /**
     * Verifica se um token é um operador.
     *
     * @param token Token a ser verificado.
     * @return Verdadeiro caso o token seja um operador, falso caso contrário.
     */
    public static boolean isOperator(String token) {
        return isOperator(token.charAt(0));
    }

    /**
     * Obtém a precedência de um operador.
     *
     * @param operator Operador a ser verificado.
     * @return O valor da precedência do operador testado.
     */
    public static int getPrecedence(char operator) {
        switch (operator) {
            case '+':
            case '-':
                return 1;
            case '*':
            case '/':
                return 2;
        }
        return 0;
    }

    /**
     * Obtém a precedência de um operador.
     *
     * @param operator Operador a ser verificado.
     * @return O valor da precedência do operador testado.
     */
    public static int getPrecedence(String operator) {
        return getPrecedence(operator.charAt(0));
    }

}
