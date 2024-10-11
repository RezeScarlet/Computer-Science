/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula02;

import static junit.framework.TestCase.*;
import org.junit.Test;

/**
 *
 * @author David
 */
public class Exercicioi2p2Test {

    @Test
    public void testPrefixToInfix() {
        System.out.println( "prefixToInfix" );
        String prefix = "* + 5 8 - 33 11";
        String expResult = "( ( 5 + 8 ) * ( 33 - 11 ) )";
        String result = Exercicioi2p2.prefixToInfix( prefix );
        assertEquals( expResult, result );
    }

    @Test
    public void testPrefixToPostfix() {
        System.out.println( "prefixToPostfix" );
        String prefix = "* + 5 8 - 33 11";
        String expResult = "5 8 + 33 11 - *";
        String result = Exercicioi2p2.prefixToPostfix( prefix );
        assertEquals( expResult, result );
    }

    @Test
    public void testPostfixToInfix() {
        System.out.println( "postfixToInfix" );
        String postfix = "5 8 + 33 11 - *";
        String expResult = "( ( 5 + 8 ) * ( 33 - 11 ) )";
        String result = Exercicioi2p2.postfixToInfix( postfix );
        assertEquals( expResult, result );
    }

    @Test
    public void testPostfixToPrefix() {
        System.out.println( "postfixToPrefix" );
        String postfix = "5 8 + 33 11 - *";
        String expResult = "* + 5 8 - 33 11";
        String result = Exercicioi2p2.postfixToPrefix( postfix );
        assertEquals( expResult, result );
    }

    @Test
    public void testInfixToPrefix() {
        System.out.println( "infixToPrefix" );
        String infix = "( ( 5 + 8 ) * ( 33 - 11 ) )";
        String expResult = "* + 5 8 - 33 11";
        String result = Exercicioi2p2.infixToPrefix( infix );
        assertEquals( expResult, result );
    }

    @Test
    public void testInfixToPostfix() {
        System.out.println( "infixToPostfix" );
        String infix = "( ( 5 + 8 ) * ( 33 - 11 ) )";
        String expResult = "5 8 + 33 11 - *";
        String result = Exercicioi2p2.infixToPostfix( infix );
        assertEquals( expResult, result );
    }
    
}
