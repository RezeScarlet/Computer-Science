/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package esdc4aula07;

import java.util.Arrays;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 * Testes do método de ordenação usando árvore bináriad e busca.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class BinarySearchTreeSortTest {

    @Test
    public void testSort() {
        
        System.out.println( "sort" );
        
        String expectedResult = "[1, 1, 2, 3, 3, 4, 6, 7, 8, 9]";
        
        Integer[] array = { 3, 4, 7, 6, 2, 1, 8, 9, 1, 3 };
        BinarySearchTreeSort.sort( array );
        
        assertEquals( expectedResult, Arrays.toString( array ) );
        
    }
    
}
