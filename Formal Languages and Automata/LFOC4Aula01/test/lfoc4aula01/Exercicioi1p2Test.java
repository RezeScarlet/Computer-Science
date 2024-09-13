package lfoc4aula01;

import java.util.Arrays;
import java.util.List;
import static junit.framework.TestCase.*;
import org.junit.Test;

/**
 * Testes dos métodos da classe GeradorStrings para o Exercício i1.2.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi1p2Test {

    @Test
    public void testGerarStringsAteK() {
        
        System.out.println( "gerarStringsAteK:\n" );
        
        char[][] as = {
            { '\0' },
            { 'w' },
            { '0', '1' },
            { 'a', 'b', 'c' }
        };
        
        String[][] sRess = {
            {},
            { "", "w", "ww", "www" },
            { "", "0", "1", "00", "01", "10", "11", "000", "001", "010", 
                "011", "100", "101", "110", "111" },
            { "", "a", "b", "c", "aa", "ab", "ac", "ba", "bb", "bc", 
                "ca", "cb", "cc", "aaa", "aab", "aac", "aba", "abb", 
                "abc", "aca", "acb", "acc", "baa", "bab", "bac", "bba", 
                "bbb", "bbc", "bca", "bcb", "bcc", "caa", "cab", "cac", 
                "cba", "cbb", "cbc", "cca", "ccb", "ccc" }
        };
        
        int k = 3;
        
        for ( int i = 1; i < 4; i++ ) {
            
            char[] a = as[i];
            String[] sRes = sRess[i];
            List<String> expResult = Arrays.<String>asList( sRes );
            List<String> result = GeradorStrings.gerarStringsAteK( k, a );
            
            System.out.println( "        k = " + k );
            if ( i != 0 ) {
                System.out.println( "        \u03A3 = " + print( a ) + "" );
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
