package lfoc4aula01;

import java.util.Arrays;
import java.util.List;
import static junit.framework.TestCase.*;
import org.junit.Test;

/**
 * Testes dos métodos da classe GeradorStrings para o Exercício i1.1.
 * 
 * @author Prof. Dr. David Buzatto
 */
// public class Exercicioi1p1Test {

    @Test
    public void testGerarStringsK() {
        
        System.out.println( "gerarStringsK:\n" );
        
        char[][] as = {
            { 'w' },
            { 'w' },
            { '0', '1' },
            { 'a', 'b', 'c' }
        };
        
        String[][] sRess = {
            { "" },
            { "w" },
            { "00", "01", "10", "11" },
            { "aaa", "aab", "aac", "aba", "abb", "abc", "aca", "acb", "acc", 
                "baa", "bab", "bac", "bba", "bbb", "bbc", "bca", "bcb", "bcc", 
                "caa", "cab", "cac", "cba", "cbb", "cbc", "cca", "ccb", "ccc" },
        };
        
        for ( int k = 0; k < 4; k++ ) {
            
            char[] a = as[k];
            String[] sRes = sRess[k];
            List<String> expResult = Arrays.<String>asList( sRes );
            List<String> result = GeradorStrings.gerarStringsK( k, a );
            
            System.out.println( "        k = " + k );
            if ( k != 0 ) {
                System.out.println( "        \u03A3 = " + print( a ) );
            }
            System.out.println( " Esperado = " + print( expResult ) );
            System.out.println( "Resultado = " + print( result ) );
            System.out.println();

            assertEquals( expResult, result );
            
        }
        
    }
    
    private String print( List<String> li ) {
        String r = "{ ";
        boolean f = true;
        for ( String s : li ) {
            if ( !f ) {
                r += ", ";
            }
            r += String.format( "\"%s\"", s );
            f = false;
        }
        r += " }";
        return r;
    }
    
    private String print( char[] a ) {
        String r = "{ ";
        boolean f = true;
        for ( char c : a ) {
            if ( !f ) {
                r += ", ";
            }
            r += String.format( "'%c'", c );
            f = false;
        }
        r += " }";
        return r;
    }
    
}
