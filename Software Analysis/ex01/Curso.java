class Curso {
  private String nome;
  private int duracaoMeses;
  private Professor professor;
  private Biblioteca biblioteca;

  public Curso(String nome, int duracaoMeses, Professor professor) {
    this.nome = nome;
    this.duracaoMeses = duracaoMeses;
    this.professor = professor;
    this.biblioteca = new Biblioteca("Biblioteca " + nome);
  }

  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public int getDuracaoMeses() {
    return duracaoMeses;
  }

  public void setDuracaoMeses(int duracaoMeses) {
    this.duracaoMeses = duracaoMeses;
  }

  public Professor getProfessor() {
    return professor;
  }

  public void setProfessor(Professor professor) {
    this.professor = professor;
  }

  public Biblioteca getBiblioteca() {
    return biblioteca;
  }

  public void setBiblioteca(Biblioteca biblioteca) {
    this.biblioteca = biblioteca;
  }

  public void iniciarAulas() {
    System.out.println("As aulas do curso " + nome + " começaram!");
  }

  public void exibirInformacoes() {
    System.out.println("Curso: " + nome);
    System.out.println("Duração: " + duracaoMeses + " meses");
    professor.exibirPerfil();
    biblioteca.exibirInformacoes();
  }
}
