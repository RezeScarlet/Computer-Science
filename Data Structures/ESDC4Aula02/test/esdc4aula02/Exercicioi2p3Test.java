/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula02;

import static junit.framework.TestCase.*;
import org.junit.Test;

/**
 * Testes dos métodos da classe Exercicioi2p2.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi2p3Test {

    @Test
    public void testEvaluateInfix() {
        System.out.println( "evaluate infix" );
        String expression = "( 7 + 8 - 7 * 15 ) / 4 + 7";
        double expResult = -15.5;
        double result = Exercicioi2p3.evaluate( expression );
        assertEquals( expResult, result );
    }
    
    @Test
    public void testEvaluatePrefix() {
        System.out.println( "evaluate prefix" );
        String expression = "+ / - + 7 8 * 7 15 4 7";
        double expResult = -15.5;
        double result = Exercicioi2p3.evaluate( expression );
        assertEquals( expResult, result );
    }
    
    @Test
    public void testEvaluatePostfix() {
        System.out.println( "evaluate postfix" );
        String expression = "7 8 + 7 15 * - 4 / 7 +";
        double expResult = -15.5;
        double result = Exercicioi2p3.evaluate( expression );
        assertEquals( expResult, result );
    }
    
}
