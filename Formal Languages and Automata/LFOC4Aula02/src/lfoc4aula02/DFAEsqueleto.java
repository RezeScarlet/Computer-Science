package lfoc4aula02;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashSet;
import java.util.List;

/**
 * Implementação de um autômato finito determinístico.
 * 
 * @author Prof. Dr. David Buzatto
 */
public class DFAEsqueleto {

  // estado inicial, null inicialmente
  private State startingState;

  // lista de estados
  private List<State> states = new ArrayList<>();

  // armazena a quantidade de estados finais.
  // usada para auxiliar na verificação da validade do estado do DFA antes
  // de executar o algoritmo contido no método "accept"
  private int finalStateQuantity;

  // armazena os símbolos do DFA.
  // populada na geração da representação de sigma e usada na geração da
  // tabela de transições
  private List<Character> symbols;

  /**
   * Definição da classe interna privada que representa um estado.
   */
  private class State {

    int number; // número que identifica o estado
    boolean isFinal; // é final

    // lista de transições desse estado
    List<Transition> transitions = new ArrayList<>();

  }

  /**
   * Definição da classe interna privada que representa uma transição.
   */
  private class Transition {
    State origin; // estado de origem
    State target; // estado de destino
    char symbol; // símbolo
  }

  /**
   * Adiciona um novo estado no DFA.
   * 
   * @param isStarting Se é um estado inicial.
   * @param isFinal    Se é um estado final.
   * @return O número que identifica o estado criado.
   * @throws IllegalArgumentException Lançada caso já exista um estado inicial
   *                                  no DFA.
   */
  public int addState(boolean isStarting, boolean isFinal)
      throws IllegalArgumentException {

    // cria um novo estado
    State newState = new State();
    newState.isFinal = isFinal;

    // caso o estado que está sendo criado for inicial
    if (isStarting) {

      // caso não exita o estado inicial no DFA
      if (startingState == null) {
        // configura
        startingState = newState;
      } else { // caso contrário, lança a exceção informando que
               // já existe um estado inicial
        throw new IllegalArgumentException(
            "there's already an starting state in this DFA!");
      }

    }

    // mais um estado final criado
    if (isFinal) {
      finalStateQuantity++;
    }

    // o número do estado é a posição em que será inserido
    newState.number = states.size();

    // adiciona o estado criado na lista de estados
    states.add(newState);

    return newState.number;

  }

  /**
   * Adiciona uma nova transição em um estado na forma:
   * 
   * origin symbol target
   * (o) ------(s)------> (t)
   * 
   * @param origin Número do estado de origem.
   * @param target Número do estado de destino.
   * @param symbol Símbolo da transição.
   * @throws IllegalArgumentException Lançada caso os estados de origem ou
   *                                  destino não existirem e se já houver uma
   *                                  transição com o mesmo símbolo
   *                                  no estado de origem.
   */
  public void addTransition(int origin, int target, char symbol)
      throws IllegalArgumentException {

    // verifica se o estado de origem existe
    if (origin < 0 || origin >= states.size()) {
      throw new IllegalArgumentException(
          "the \"" + origin + " state does not exists!");
    }

    // verifica se o estado de destino existe
    if (target < 0 || target >= states.size()) {
      throw new IllegalArgumentException(
          "the \"" + target + " state does not exists!");
    }

    // obtém os estados da lista
    State originState = states.get(origin);
    State targetState = states.get(target);

    // verifica se o estado de origem já possui transição
    // com o símbolo fornecido
    for (Transition t : originState.transitions) {
      if (t.symbol == symbol) {
        throw new IllegalArgumentException(
            "the \"" + origin + " state already have a transition "
                + "with the \"" + symbol + "\" symbol!");
      }
    }

    // cria uma nova transição
    Transition t = new Transition();
    t.origin = originState;
    t.target = targetState;
    t.symbol = symbol;

    // adiciona da lista de transições do estado de origem
    originState.transitions.add(t);

  }

  /**
   * Verifica se uma string é aceita ou rejeitada pelo DFA, ou seja, se
   * ela pertence à linguagem definida por esse DFA.
   * 
   * @param string A string que será verificada.
   * @return Verdadeiro caso a string for aceita, falso caso contrário.
   * @throws IllegalStateException Lançada se o DFA não possuir um estado
   *                               inicial ou pelo menos um estado final.
   */
  public boolean accepts(String string) throws IllegalStateException {

    // se o DFA não tem estado inicial
    if (startingState == null) {
      throw new IllegalStateException(
          "this DFA doesn't have an starting state!");
    }

    // se o DFA não tem pelo menos um estado final
    if (finalStateQuantity == 0) {
      throw new IllegalStateException(
          "this DFA doesn't have at least one final state!");
    }

    // implementação

    State currentState = startingState;

    for (char c : string.toCharArray()) {
      boolean transitionFound = false;

      for (Transition t : currentState.transitions) {
        if (t.symbol == c) {
          currentState = t.target;
          transitionFound = true;
          break;
        }
      }

      if (transitionFound) {
        return true;
      }
    }


  // cuidado, sempre está retornando false para poder ser compilado
  // sua implementação retornará true caso a string seja aceita pelo DFA,
  // false caso contrário.
  return false;

  }

  /**
   * Obtém a representação em String do conjunto Q.
   * 
   * @return Uma string que representa o conjunto Q.
   */
  public String generateQRep() {

    StringBuilder sb = new StringBuilder();
    sb.append("Q = { ");

    for (int i = 0; i < states.size(); i++) {
      if (i != 0) {
        sb.append(", ");
      }
      sb.append(String.format("q%d", i));
    }

    sb.append(" }");

    return sb.toString();

  }

  /**
   * Obtém a representação em String do conjunto sigma.
   * 
   * @return Uma string que representa o conjunto sigma.
   */
  public String generateSigmaRep() {

    StringBuilder sb = new StringBuilder();
    HashSet<Character> hs = new HashSet<>();

    for (State s : states) {
      for (Transition t : s.transitions) {
        hs.add(t.symbol);
      }
    }

    symbols = new ArrayList<>(hs);
    Collections.sort(symbols);

    sb.append("\u03A3 = { ");

    for (int i = 0; i < symbols.size(); i++) {
      if (i != 0) {
        sb.append(", ");
      }
      sb.append(String.format("'%c'", symbols.get(i)));
    }

    sb.append(" }");

    return sb.toString();

  }

  /**
   * Obtém a representação em String do estado inicial.
   * 
   * @return Uma string que representa o estado inicial.
   */
  public String generateQ0Rep() {
    return "q" + startingState.number;
  }

  /**
   * Obtém a representação em String da tabela de transições.
   * 
   * @return Uma string que representa a tabela de transições.
   */
  public String generateDeltaRep() {

    StringBuilder sb = new StringBuilder();

    sb.append("\u03B4:\t");
    for (char s : symbols) {
      sb.append(s).append("\t");
    }
    sb.append("\n");

    boolean first = true;

    for (State e : states) {

      if (!first) {
        sb.append("\n");
      } else {
        first = false;
      }

      if (e.isFinal) {
        sb.append("*");
      }

      if (e == startingState) {
        sb.append("->");
      }

      sb.append("q").append(e.number).append("\t");

      Collections.sort(e.transitions, new Comparator<Transition>() {
        @Override
        public int compare(Transition o1, Transition o2) {
          return o1.symbol - o2.symbol;
        }
      });

      for (char s : symbols) {

        Transition tf = null;

        for (Transition t : e.transitions) {
          if (s == t.symbol) {
            tf = t;
            break;
          }
        }
        if (tf != null) {
          sb.append("q").append(tf.target.number).append("\t");
        } else {
          sb.append("\u2205").append("\t");
        }

      }

    }

    return sb.toString();

  }

  /**
   * Obtém a representação em String do conjunto F.
   * 
   * @return Uma string que representa o conjunto F.
   */
  public String generateFRep() {

    boolean first = true;

    StringBuilder sb = new StringBuilder();
    sb.append("F = { ");

    for (int i = 0; i < states.size(); i++) {
      if (states.get(i).isFinal) {
        if (!first) {
          sb.append(", ");
        } else {
          first = false;
        }
        sb.append(String.format("q%d", i));
      }
    }

    sb.append(" }");

    return sb.toString();

  }

  @Override
  public String toString() {

    StringBuilder sb = new StringBuilder();

    sb.append("A = ( Q, \u03A3, \u03B4, ").append(generateQ0Rep()).append(", F )").append("\n");
    sb.append(generateQRep()).append("\n");
    sb.append(generateSigmaRep()).append("\n");
    sb.append(generateFRep()).append("\n");
    sb.append(generateDeltaRep());

    return sb.toString();

  }

}
