package dependents;

// @author Guilherme de Souza Dionisio Rosseti BV3032019

public class AVLTree {

    private class Node {

        int key;
        char letter;
        int height;
        Node left, right;

        Node(int key, char letter) {
            this.key = key;
            this.letter = letter;
            this.height = 1;
        }
    }

    private Node root;

    public void insert(int key, char letter) {
        root = insert(root, key, letter);
    }

    private Node insert(Node node, int key, char letter) {
        if (node == null) {
            return new Node(key, letter);
        }

        if (key < node.key) {
            node.left = insert(node.left, key, letter);
        } else if (key > node.key) {
            node.right = insert(node.right, key, letter);
        } else {
            return node;
        }
        updateHeight(node);
        return balance(node);
    }

    private void updateHeight(Node node) {
        node.height = 1 + Math.max(height(node.left), height(node.right));
    }

    private int height(Node node) {
        return node == null ? 0 : node.height;
    }

    private int getBalance(Node node) {
        return node == null ? 0 : height(node.left) - height(node.right);
    }

    private Node rotateRight(Node y) {
        Node x = y.left;
        Node T2 = x.right;

        x.right = y;
        y.left = T2;

        updateHeight(y);
        updateHeight(x);

        return x;
    }

    private Node rotateLeft(Node x) {
        Node y = x.right;
        Node T2 = y.left;

        y.left = x;
        x.right = T2;

        updateHeight(x);
        updateHeight(y);

        return y;
    }

    private Node balance(Node node) {
        int balance = getBalance(node);

        if (balance > 1 && getBalance(node.left) >= 0) {
            return rotateRight(node);
        }

        if (balance > 1 && getBalance(node.left) < 0) {
            node.left = rotateLeft(node.left);
            return rotateRight(node);
        }

        if (balance < -1 && getBalance(node.right) <= 0) {
            return rotateLeft(node);
        }

        if (balance < -1 && getBalance(node.right) > 0) {
            node.right = rotateRight(node.right);
            return rotateLeft(node);
        }

        return node;
    }

    public void printTree() {
        print(root, "", true);
    }

    private void print(Node node, String prefix, boolean isTail) {
        if (node != null) {
            System.out.println(prefix + (isTail ? "└── " : "├── ") + node.key + " (" + node.letter + ")");
            print(node.left, prefix + (isTail ? "    " : "│   "), false);
            print(node.right, prefix + (isTail ? "    " : "│   "), true);
        }

    }

}
