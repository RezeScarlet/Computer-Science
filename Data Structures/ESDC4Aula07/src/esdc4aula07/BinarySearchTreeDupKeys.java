/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package esdc4aula07;

import aesd.ds.implementations.linear.LinkedQueue;
import aesd.ds.implementations.linear.ResizingArrayList;
import aesd.ds.implementations.linear.ResizingArrayStack;
import aesd.ds.interfaces.List;
import aesd.ds.interfaces.Queue;
import aesd.ds.interfaces.Stack;
import java.util.Iterator;

/**
 * Implementação de uma árvore binária de busca fundamental (Binary Search Tree)..
 * 
 * Essa árvore binária de busca ACEITA chaves duplicadas e deve ser usada no
 * método de ordenação proposto no exercício.
 * 
 * Implementação baseada na obra: SEDGEWICK, R.; WAYNE, K. Algorithms. 
 * 4. ed. Boston: Pearson Education, 2011. 955 p.
 * 
 * @param <Key> Tipo das chaves que serão armazenadas na árvore.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class BinarySearchTreeDupKeys<Key extends Comparable<Key>> implements Iterable<Key> {

    /*
     * Classe interna estática que define a estrutura básica dos nós das árvores.
     * Ela e seus membros são públicos para poder expor a estrutura dos nós.
     */
    public static class Node<Key extends Comparable<Key>> {
        
        public Key key;
        public Node<Key> left;
        public Node<Key> right;
        
        @Override
        public String toString() {
            return key.toString();
        }
        
    }
    
    // raiz da árvore
    private Node<Key> root;
    
    // tamanho da árvore
    private int size;
    
    /**
     * Constrói uma árvore binária de busca vazia.
     */
    public BinarySearchTreeDupKeys() {
        root = null;   // redundante, apenas para mostrar o que acontece
    }
    
    public void put( Key key ) throws IllegalArgumentException {
        
        if ( key == null ) {
            throw new IllegalArgumentException( "first argument to put() is null" );
        }
        
        root = put( root, key );
        
    }
    
    private Node<Key> put( Node<Key> node, Key key ) {
        
        if ( node == null ) {

            node = new Node<>();
            node.key = key;
            node.left = null;
            node.right = null;
            
            size++;

        } else {
            
            int comp = key.compareTo( node.key );
            
            if ( comp <= 0 ) {
                node.left = put( node.left, key );
            } else if ( comp > 0 ) {
                node.right = put( node.right, key );
            }
            
        }

        return node;

    }
    
    public void delete( Key key ) throws IllegalArgumentException {

        if ( key == null ) {
            throw new IllegalArgumentException( "argument to delete() is null" );
        }
        
        root = delete( root, key );

    }
    
    /*
     * Método privado para a remoção recursiva (Ribbard Deletion).
     */
    private Node<Key> delete( Node<Key> node, Key key ) {
        
        if ( node != null ) {
            
            Node<Key> temp;
            int comp = key.compareTo( node.key );

            if ( comp == 0 ) {
                
                size--;
                
                // o nó não tem filhos
                if ( node.left == node.right ) {

                    return null;

                // o nó a ser removido não tem filho à esquerda, só à direita
                // a primeira condição garante que se os dois nós não são o mesmo,
                // um deles pode ser null.
                } else if ( node.left == null ) {

                    temp = node.right;
                    node.right = null;
                    return temp;

                // o nó a ser removido não tem filho à direita, só à esquerda
                // a primeira condição garante que se os dois nós não são o mesmo,
                // um deles pode ser null.
                } else if ( node.right == null ) {

                    temp = node.left;
                    node.left = null;
                    return temp;

                // o nó a ser removido tem filhos em ambos os lados
                } else {

                    // busca pelo menor nó, onde a subárvore esquerda
                    // será inserida
                    temp = node.right;
                    Node<Key> min = temp;

                    while ( min.left != null ) {
                        min = min.left;
                    }

                    // reaponta a subárvore esquerda do nó removido
                    // no menor item encontrado
                    min.left = node.left;

                    node.left = null;
                    node.right = null;

                    return temp;

                }

            } else if ( comp < 0 ) {
                node.left = delete( node.left, key );
            } else { // comparacao > 0
                node.right = delete( node.right, key );
            }
            
        }

        return node;

    }
    
    public boolean isEmpty() {
        return size == 0;
    }
    
    public int getSize() {
        return size;
    }
    
    /**
     * Retorna um iterável contendo as chaves da árvores na ordem do percurso
     * especificado.
     * 
     * @param type Tipo do percurso
     * @return 
     */
    public Iterable<Key> traverse( TraversalTypes type ) {
        
        List<Key> entries = new ResizingArrayList<>();
        
        switch ( type ) {
            case PREORDER:
                preOrder( root, entries );
                break;
            case INORDER:
                inOrder( root, entries );
                break;
            case POSTORDER:
                postOrder( root, entries );
                break;
            case LEVEL_ORDER:
                levelOrder( root, entries );
                break;
            case INVERSE_PREORDER:
                inversePreOrder( root, entries );
                break;
            case INVERSE_INORDER:
                inverseInOrder( root, entries );
                break;
            case INVERSE_POSTORDER:
                inversePostOrder( root, entries );
                break;
            case INVERSE_LEVEL_ORDER:
                inverseLevelOrder( root, entries );
                break;
        }
        
        
        return entries;
        
    }
    
    /*
     * Métodos privados para os percursos.
     */
    private void preOrder( Node<Key> node, List<Key> keys ) {
        
        if ( node != null ) {
            keys.add( node.key );
            preOrder( node.left, keys );
            preOrder( node.right, keys );
        }
        
    }
    
    private <Key extends Comparable<Key>, Value> void inOrder( Node<Key> node, List<Key> keys ) {
        
        if ( node != null ) {
            inOrder( node.left, keys );
            keys.add( node.key );
            inOrder( node.right, keys );
        }
        
    }
    
    private <Key extends Comparable<Key>, Value> void postOrder( Node<Key> node, List<Key> keys ) {
        
        if ( node != null ) {
            postOrder( node.left, keys );
            postOrder( node.right, keys );
            keys.add( node.key );
        }
        
    }
    
    private <Key extends Comparable<Key>, Value> void levelOrder( Node<Key> node, List<Key> keys ) {
        
        if ( node != null ) {
            
            Queue<Node<Key>> queue = new LinkedQueue<>();
            queue.enqueue( node );

            while ( !queue.isEmpty() ) {

                Node<Key> current = queue.dequeue();
                keys.add( current.key );

                if ( current.left != null ) {
                    queue.enqueue( current.left );
                }

                if ( current.right != null ) {
                    queue.enqueue( current.right );
                }

            }
            
        }
        
    }
    
    private <Key extends Comparable<Key>, Value> void inversePreOrder( Node<Key> node, List<Key> keys ) {
        
        if ( node != null ) {
            keys.add( node.key );
            inversePreOrder( node.right, keys );
            inversePreOrder( node.left, keys );
        }
        
    }
    
    private <Key extends Comparable<Key>, Value> void inverseInOrder( Node<Key> node, List<Key> keys ) {
        
        if ( node != null ) {
            inverseInOrder( node.right, keys );
            keys.add( node.key );
            inverseInOrder( node.left, keys );
        }
        
    }
    
    private <Key extends Comparable<Key>, Value> void inversePostOrder( Node<Key> node, List<Key> keys ) {
        
        if ( node != null ) {
            inversePostOrder( node.right, keys );
            inversePostOrder( node.left, keys );
            keys.add( node.key );
        }
        
    }
    
    private <Key extends Comparable<Key>, Value> void inverseLevelOrder( Node<Key> node, List<Key> keys ) {
        
        if ( node != null ) {
            
            Queue<Node<Key>> queue = new LinkedQueue<>();
            Stack<Key> stack = new ResizingArrayStack<>();
            queue.enqueue( node );

            while ( !queue.isEmpty() ) {

                Node<Key> current = queue.dequeue();
                stack.push( current.key );

                if ( current.left != null ) {
                    queue.enqueue( current.left );
                }

                if ( current.right != null ) {
                    queue.enqueue( current.right );
                }

            }

            while ( !stack.isEmpty() ) {
                keys.add( stack.pop() );
            }
        
        }
        
    }
    
    @Override
    public Iterator<Key> iterator() {
        return traverse( TraversalTypes.INORDER ).iterator();
    }
    
    /**
     * Cria uma representação em String da árvore.
     * Esta representação apresenta os elementos na ordem do percurso em ordem.
     */
    @Override
    public String toString() {
        
        StringBuilder sb = new StringBuilder();
        
        if ( !isEmpty() ) {
            
            for ( Key k : traverse( TraversalTypes.INORDER ) ) {
                
                if ( k.equals( root.key ) ) {
                    sb.append( k ).append( " <- root\n" );
                } else {
                    sb.append( k ).append( "\n" );
                }
                
            }
            
        } else {
            sb.append( "empty tree!\n" );
        }
        
        return sb.toString();
        
    }
    
}
