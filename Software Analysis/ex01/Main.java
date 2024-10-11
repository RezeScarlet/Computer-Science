public class Main {
    public static void main(String[] args) {
        Professor professorJoao = new Professor("Dr. João", "Matemática", 15);
        Biblioteca bibliotecaEngenharia = new Biblioteca("Biblioteca do Curso Engenharia de Software");
        Curso engenhariaSoftware = new Curso("Engenharia de Software", 24, professorJoao, bibliotecaEngenharia);
        Aluno alunoMaria = new Aluno("Maria", 20, engenhariaSoftware);
        CursoOnline programacaoJava = new CursoOnline("Programação Java", 6, professorJoao, "Plataforma Moodle IFSP");

        System.out.println("Nome: " + alunoMaria.getNome() + ", Idade: " + alunoMaria.getIdade() + 
                           ", Curso: " + alunoMaria.getCurso().getNome());
        alunoMaria.getCurso().exibirInformacoes();


        programacaoJava.iniciarAulas();

        programacaoJava.exibirInformacoes();

        professorJoao.exibirPerfil();
    }
}
