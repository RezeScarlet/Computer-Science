/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula02;

import static junit.framework.TestCase.*;
import org.junit.Test;

/**
 * Testes dos métodos da classe Exercicioi2p1.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi2p1Test {

    @Test
    public void testIsBalanced() {
        System.out.println( "isBalanced" );
        String expression = "a[]90909900({}[])b";
        char[] pairs = { 'a', 'b', '[', ']', '9', '0', '(', ')', '{', '}' };
        boolean expResult = true;
        boolean result = Exercicioi2p1.isBalanced( expression, pairs );
        assertEquals( expResult, result );
    }
    
    @Test
    public void testIsNotBalanced() {
        System.out.println( "isNotBalanced" );
        String expression = "a[]909009900({}[])b";
        char[] pairs = { 'a', 'b', '[', ']', '9', '0', '(', ')', '{', '}' };
        boolean expResult = false;
        boolean result = Exercicioi2p1.isBalanced( expression, pairs );
        assertEquals( expResult, result );
    }
    
}
