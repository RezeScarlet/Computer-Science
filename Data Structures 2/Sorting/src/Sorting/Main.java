package Sorting;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;

import javax.swing.plaf.basic.BasicInternalFrameTitlePane.SystemMenuBar;

import br.com.davidbuzatto.jsge.core.engine.EngineFrame;
import br.com.davidbuzatto.jsge.imgui.GuiGroup;

public class Main extends EngineFrame {
  int margin;

  int pos;
  double tempoParaMudar;
  double contadorTempo;

  int[] arraySelection;
  int[] arrayInsertion;
  int[] arrayBubble;
  int[] arrayMerge;

  private List<int[]> listaSelection;
  private List<int[]> listaInsertion;
  private List<int[]> listaBubble;
  private static List<int[]> listaMerge;

  GuiGroup groupSelection;
  GuiGroup groupInsertion;
  GuiGroup groupBubble;
  GuiGroup groupMerge;

  public Main() {
    super(800, 450, "Ordenações", 60, false);
  }

  @Override
  public void create() {
    useAsDependencyForIMGUI();
    margin = 5;

    // arraySelection = new int[] { 9, 10, 5, 6, 3, 1, 2, 8, 7, 5 };
    // arraySelection = random.ints(10, 1, 10).toArray();
    // listaSelection = new ArrayList<>();
    tempoParaMudar = 1;
    Random random = new Random();
    arraySelection = random.ints(10, 1, 10).toArray();
    arrayInsertion = arraySelection.clone();
    arrayBubble = arraySelection.clone();
    arrayMerge = arraySelection.clone();

    listaSelection = new ArrayList<>();
    listaInsertion = new ArrayList<>();
    listaBubble = new ArrayList<>();
    listaMerge = new ArrayList<>();

    // System.out.println(Arrays.toString(arrayMerge));
    // System.out.println(Arrays.toString(arraySelection));
    // System.out.println(Arrays.toString(arrayInsertion));
    // System.out.println(Arrays.toString(arrayBubble));

    copiarArray(listaSelection, arraySelection);
    copiarArray(listaInsertion, arrayInsertion);
    copiarArray(listaBubble, arrayBubble);
    copiarArray(listaMerge, arrayMerge);

    // System.out.println(Arrays.deepToString(listaSelection.toArray()));
    // System.out.println(Arrays.deepToString(listaInsertion.toArray()));
    // System.out.println(Arrays.deepToString(listaBubble.toArray()));
    // System.out.println(Arrays.deepToString(listaMerge.toArray()));

    selectionSort(arraySelection);
    insertionSort(arrayInsertion);
    bubbleSort(arrayBubble);
    mergeSort(arrayMerge, 0, arrayMerge.length - 1);

    groupSelection = new GuiGroup(
        margin,
        margin,
        getScreenWidth() / 2 - margin,
        getScreenHeight() / 2 - margin,
        "Selection");

    groupInsertion = new GuiGroup(
        getScreenWidth() / 2 + margin,
        margin,
        getScreenWidth() / 2 - margin * 2,
        getScreenHeight() / 2 - margin,
        "Insertion");

    groupBubble = new GuiGroup(
        margin,
        getScreenHeight() / 2 + margin,
        getScreenWidth() / 2 - margin,
        getScreenHeight() / 2 - margin * 2,
        "Bubble");

    groupMerge = new GuiGroup(
        getScreenWidth() / 2 + margin,
        getScreenHeight() / 2 + margin,
        getScreenWidth() / 2 - margin * 2,
        getScreenHeight() / 2 - margin * 2,
        "Merge");

  }

  @Override
  public void update(double delta) {
    // System.out.println(Arrays.deepToString(listaSelection.toArray()));
    contadorTempo += delta;

    if (contadorTempo > tempoParaMudar) {
      contadorTempo = 0;
      // if (pos < listaSelection.size() - 1) {
      pos++;
      // }
    }

  }

  @Override
  public void draw() {

    clearBackground(WHITE);

    if (pos < listaSelection.size()) {
      desenharArray(listaSelection.get(pos), 10, getScreenHeight() / 2, 29, 10, 10, groupSelection);
    } else {
      desenharArray(listaSelection.get(listaSelection.size() - 1), 10, getScreenHeight() / 2, 29, 10, 10,
          groupSelection);
    }

    if (pos < listaInsertion.size()) {
      desenharArray(listaInsertion.get(pos), 10, getScreenHeight() / 2, 29, 10, 10, groupInsertion);
    } else {
      desenharArray(listaInsertion.get(listaInsertion.size() - 1), 10, getScreenHeight() / 2, 29, 10, 10,
          groupInsertion);
    }

    if (pos < listaBubble.size()) {
      desenharArray(listaBubble.get(pos), 10, getScreenHeight() / 2, 29, 10, 10, groupBubble);
    } else {
      desenharArray(listaBubble.get(listaBubble.size() - 1), 10, getScreenHeight() / 2, 29, 10, 10, groupBubble);
    }

    if (pos < listaMerge.size()) {
      desenharArray(listaMerge.get(pos), 10, getScreenHeight() / 2, 29, 10, 10, groupMerge);
    } else {
      desenharArray(listaMerge.get(listaMerge.size() - 1), 10, getScreenHeight() / 2, 29, 10, 10, groupMerge);
    }

    groupSelection.draw();
    groupInsertion.draw();
    groupBubble.draw();
    groupMerge.draw();

  }

  private static void copiarArray(List<int[]> lista, int[] array) {
    // System.out.println(Arrays.toString(array));
    // System.out.println(Arrays.deepToString(lista.toArray()));
    int[] novoArray = new int[array.length];
    // System.out.println(Arrays.toString(novoArray));
    // int[] novoArray = arraySelection.clone();
    System.arraycopy(array, 0, novoArray, 0, array.length);
    // System.out.println(Arrays.toString(novoArray));
    // System.out.println(Arrays.deepToString(lista.toArray()));
    lista.add(novoArray);
  }

  private void desenharArray(
      int[] array,
      int x,
      int y,
      int largura,
      int espacamento,
      int tamanhoPedaco,
      GuiGroup group) {

    for (int i = 0; i < array.length; i++) {
      fillRectangle(
          group.getX() + margin + i * (largura + espacamento),
          group.getHeight() + group.getY() - array[i] * tamanhoPedaco,
          largura,
          array[i] * tamanhoPedaco,
          BLACK);
    }

  }

  private void selectionSort(int[] array) {

    for (int i = 0; i < array.length - 1; i++) {
      int menor = i;
      for (int j = i + 1; j < array.length; j++) {
        if (array[j] < array[menor]) {
          menor = j;
        }
      }
      int t = array[i];
      array[i] = array[menor];
      array[menor] = t;
      copiarArray(listaSelection, array);
    }

  }

  private void insertionSort(int array[]) {
    for (int i = 1; i < array.length; ++i) {
      int key = array[i];
      int j = i - 1;

      while (j >= 0 && array[j] > key) {
        array[j + 1] = array[j];
        j = j - 1;
      }
      array[j + 1] = key;
      copiarArray(listaInsertion, array);
    }
  }

  private void bubbleSort(int array[]) {
    int n = array.length;
    int i, j, temp;
    boolean swapped;
    for (i = 0; i < n - 1; i++) {
      swapped = false;
      for (j = 0; j < n - i - 1; j++) {
        if (array[j] > array[j + 1]) {

          temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
          swapped = true;
          copiarArray(listaBubble, array);
        }
      }

      if (swapped == false)
        break;
    }
  }

  static void merge(int array[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[] = new int[n1];
    int R[] = new int[n2];

    for (int i = 0; i < n1; ++i)
      L[i] = array[l + i];
    for (int j = 0; j < n2; ++j)
      R[j] = array[m + 1 + j];

    int i = 0, j = 0;

    int k = l;
    while (i < n1 && j < n2) {
      if (L[i] <= R[j]) {
        array[k] = L[i];
        copiarArray(listaMerge, array);
        i++;
      } else {
        array[k] = R[j];
        copiarArray(listaMerge, array);
        j++;
      }
      k++;
    }

    while (i < n1) {
      array[k] = L[i];
      copiarArray(listaMerge, array);
      i++;
      k++;
    }

    while (j < n2) {
      array[k] = R[j];
      copiarArray(listaMerge, array);
      j++;
      k++;
    }
  }

  static void mergeSort(int array[], int l, int r) {
    if (l < r) {

      int m = l + (r - l) / 2;

      mergeSort(array, l, m);
      mergeSort(array, m + 1, r);

      merge(array, l, m, r);
    }
  }

  public static void main(String[] args) {
    new Main();
  }

}
