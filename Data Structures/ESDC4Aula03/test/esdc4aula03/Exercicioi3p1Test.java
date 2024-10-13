/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula03;

import java.util.Arrays;
import org.junit.Assert;
import org.junit.Test;

/**
 * Testes dos métodos da classe Exercicioi3p1.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi3p1Test {

    @Test
    public void testJosephus7x2() {
        System.out.println( "josephus7x2" );
        int[] expResult = { 1, 3, 5, 0, 4, 2, 6 };
        int[] result = Exercicioi3p1.josephus( 7, 2 );
        Assert.assertArrayEquals( expResult, result );
    }
    
    @Test
    public void testJosephus50x5() {
        System.out.println( "josephus50x5" );
        int[] expResult = { 4, 9, 14, 19, 24, 29, 34, 39, 44, 49, 
                            5, 11, 17, 23, 30, 36, 42, 48, 6, 13, 
                            21, 28, 37, 45, 2, 12, 22, 32, 41, 1, 
                            15, 26, 38, 0, 16, 31, 46, 10, 33, 3, 
                            25, 47, 27, 8, 43, 40, 7, 20, 35, 18 };
        int[] result = Exercicioi3p1.josephus( 50, 5 );
        Assert.assertArrayEquals( expResult, result );
    }
    
}


