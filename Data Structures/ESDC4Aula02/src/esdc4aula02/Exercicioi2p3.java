/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula02;

import aesd.ds.implementations.linear.ResizingArrayStack;
import static esdc4aula02.Exercicioi2p2.infixToPostfix;
import static esdc4aula02.Exercicioi2p2.isOperand;
import static esdc4aula02.Exercicioi2p2.isOperator;
import static esdc4aula02.Exercicioi2p2.prefixToPostfix;

/**
 * Resolução do Exercício i2.3
 * 
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi2p3 {
    
    /**
     * Avalia uma expressão aritmética fornecida em qualquer forma (pré-fixada,
     * infixa ou pós-fixada), gerando o resultado. As operações de adição,
     * subtração, multiplicação e divisão devem ser suportadas.
     * 
     * @param expression Expressão a ser avaliada.
     * @return O valor obtido após o cômputo da expressão.
     * @throws IllegalArgumentException Caso a expressão fornecida seja inválida,
     * do ponto de vista estrutural, como ter um valor não numérico onde um
     * é esperado, bem como o uso de caracteres ou operações não suportadas.
     */
    
    public static double evaluate( String expression ) throws IllegalArgumentException {
        
        expression = expression.trim();

        if(isOperator(expression.charAt(0))){
            return evaluatePostfix(prefixToPostfix(expression));
        }else if(isOperator(expression.charAt(expression.length() - 1))){
            return evaluatePostfix(expression);
        }else{
            return evaluatePostfix(infixToPostfix(expression));
        }
        
    }
    
    private static double evaluatePostfix(String postfix){
        
        ResizingArrayStack<Double> operacao = new ResizingArrayStack<>();

        for(int i = 0; i < postfix.length(); i++){
            
            char currentChar = postfix.charAt(i);

            if(Character.isWhitespace(currentChar)){
                continue;
            }

            if(isOperand(currentChar)){
                
                StringBuilder num = new StringBuilder();

                while (i < postfix.length() && Character.isDigit(postfix.charAt(i))){
                    
                    num.append(postfix.charAt(i));
                    i++;
                    
                }
                
                i--;
                operacao.push(Double.valueOf(num.toString()));
                
            }else if(isOperator(currentChar)){
                
                double val2 = operacao.pop();
                double val1 = operacao.pop();
                double resultado = 0;

                switch (currentChar) {
                    case '+':
                        resultado = val1 + val2;
                        break;
                    case '-':
                        resultado = val1 - val2;
                        break;
                    case '*':
                        resultado = val1 * val2;
                        break;
                    case '/':
                        if (val2 == 0) {
                            throw new IllegalArgumentException("Divisão por zero.");
                        }
                        resultado = val1 / val2;
                        break;
                }
                
                operacao.push(resultado);
                
            }
        }

        return operacao.pop();
    }
    
}