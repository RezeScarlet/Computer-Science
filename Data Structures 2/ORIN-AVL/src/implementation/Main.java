package implementation;

import dependents.AVLTree;

// @author Guilherme de Souza Dionisio Rosseti BV3032019

public class Main {

    public static void main(String[] args) {
        AVLTree tree = new AVLTree();

        tree.insert(7, 'G');
        tree.insert(21, 'u');
        tree.insert(9, 'i');
        tree.insert(12, 'l');
        tree.insert(8, 'h');
        tree.insert(5, 'e');
        tree.insert(18, 'r');
        tree.insert(13, 'm');
        tree.insert(5, 'e');
        tree.insert(4, 'd');
        tree.insert(5, 'e');
        tree.insert(19, 's');
        tree.insert(15, 'o');
        tree.insert(21, 'u');
        tree.insert(26, 'z');
        tree.insert(1, 'a');
        tree.insert(4, 'd');
        tree.insert(9, 'i');
        tree.insert(15, 'o');
        tree.insert(14, 'n');
        tree.insert(9, 'i');
        tree.insert(19, 's');
        tree.insert(9, 'i');
        tree.insert(15, 'o');
        tree.insert(18, 'r');
        tree.insert(15, 'o');
        tree.insert(19, 's');
        tree.insert(19, 's');
        tree.insert(5, 'e');
        tree.insert(20, 't');
        tree.insert(9, 'i');

        tree.printTree();

    }

}
