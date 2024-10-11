package lfoc4aula02;

import static junit.framework.TestCase.*;
import org.junit.Test;

/**
 * Testes do método accepts da classe DFA para o Exercício i2.1.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class Exercicioi2p1Test {

    @Test
    public void testL1() {
        
        System.out.println( "Teste 1:" );
        System.out.println( "L = { x01y | x e y são quaisquer strings de 0's e 1's }\n" );
        
        DFA dfa = new DFA();
        int q0 = dfa.addState( true, false );
        int q1 = dfa.addState( false, false );
        int q2 = dfa.addState( false, true );
        
        dfa.addTransition( q0, q1, '0' );
        dfa.addTransition( q0, q0, '1' );
        
        dfa.addTransition( q1, q1, '0' );
        dfa.addTransition( q1, q2, '1' );
        
        dfa.addTransition( q2, q2, '0' );
        dfa.addTransition( q2, q2, '1' );
        
        System.out.println( "DFA:" );
        System.out.println( dfa );
        
        System.out.println( "\nVerificações:" );
        
        String[] stringsTeste = {
            "01",
            "11010",
            "100011",
            "",
            "0",
            "111000",
            "111a000"
        };
        
        boolean[] esperado = {
            true, true, true, false, false, false, false
        };
        
        int i = 0;
        for ( String string : stringsTeste ) {
            
            boolean ac = dfa.accepts( string );
            
            String stringR = string.length() == 0 ? "\u03B5" : "\"" + string + "\"";
            System.out.println( stringR + ":" );
            System.out.printf( "    Esperado: %s %s L(A)\n", 
                    stringR, esperado[i] ? "\u2208" : "\u2209" );
            System.out.printf( "   Resultado: %s %s L(A)\n", 
                    stringR, ac ? "\u2208" : "\u2209" );
            
            System.out.println();
            
            assertEquals( esperado[i++], ac );
            
        }
        
    }
    
    @Test
    public void testL2() {
        
        System.out.println( "Teste 2:" );
        System.out.println( "L = { 0^i \u2228 1^j | i > 0 e par e j > 0 e ímpar }\n" );
        
        DFA dfa = new DFA();
        int q0 = dfa.addState( true, false );
        int q1 = dfa.addState( false, false );
        int q2 = dfa.addState( false, true );
        int q3 = dfa.addState( false, false );
        int q4 = dfa.addState( false, true );
        int q5 = dfa.addState( false, false );
        
        dfa.addTransition( q0, q1, '0' );
        dfa.addTransition( q0, q4, '1' );
        
        dfa.addTransition( q1, q2, '0' );
        
        dfa.addTransition( q2, q3, '0' );
        
        dfa.addTransition( q3, q2, '0' );
        
        dfa.addTransition( q4, q5, '1' );
        
        dfa.addTransition( q5, q4, '1' );
        
        System.out.println( "DFA:" );
        System.out.println( dfa );
        
        System.out.println( "\nVerificações:" );
        
        String[] stringsTeste = {
            "00", 
            "0000", 
            "000000", 
            "1", 
            "111", 
            "11111",
            "",
            "0", 
            "000", 
            "11", 
            "1111", 
            "0101", 
            "1010",
            "11111a"
        };
        
        boolean[] esperado = {
            true, true, true, true, true, true, false, false, false, false, false, false, false, false
        };
        
        int i = 0;
        for ( String string : stringsTeste ) {
            
            boolean ac = dfa.accepts( string );
            
            String stringR = string.length() == 0 ? "\u03B5" : "\"" + string + "\"";
            System.out.println( stringR + ":" );
            System.out.printf( "    Esperado: %s %s L(A)\n", 
                    stringR, esperado[i] ? "\u2208" : "\u2209" );
            System.out.printf( "   Resultado: %s %s L(A)\n", 
                    stringR, ac ? "\u2208" : "\u2209" );
            
            System.out.println();
            
            assertEquals( esperado[i++], ac );
            
        }
        
    }
    
}
