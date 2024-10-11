class Aluno {
  private String nome;
  private int idade;
  private Curso curso;

  public Aluno(String nome, int idade, Curso curso) {
    this.nome = nome;
    this.idade = idade;
    this.curso = curso;
  }

  public String getNome() {
    return nome;
  }

  public void setNome(String nome) {
    this.nome = nome;
  }

  public int getIdade() {
    return idade;
  }

  public void setIdade(int idade) {
    this.idade = idade;
  }

  public Curso getCurso() {
    return curso;
  }

  public void setCurso(Curso curso) {
    this.curso = curso;
  }

  public void exibirDados() {
    System.out.println("Aluno: " + nome);
    System.out.println("Idade: " + idade);
    if (curso != null) {
      curso.exibirInformacoes();
    }
  }

  public void estudar() {
    System.out.println("O aluno " + nome + " está estudando.");
  }
}
