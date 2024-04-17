import java.util.ArrayList;
import java.util.Random;

public class MyThread extends Thread{
    
    final static long NUMERO_TOTAL=1_000_000_000L;

    private long numeros;

    public MyThread(long qtd_numeros)
    {
        numeros = qtd_numeros;
    }

    public static void main(String[] args) {
        int threads = args.length > 0 ? Integer.parseInt(args[0]) : 1;
        long numeroPorThread = (NUMERO_TOTAL) / threads;

        System.out.println("Número de threads: " + threads);

        ArrayList<MyThread> lista = new ArrayList<MyThread>();

        long tempo = System.currentTimeMillis();
        for (int n =0; n< threads;n++){
            lista.add(new MyThread(numeroPorThread));
            lista.get(lista.size()-1).start();
        }

        boolean continuar = true;
        while(continuar)
        {
            int contagem = 0;
            for (MyThread m : lista) {
                if(m.isAlive()) break;
                else contagem++;
            }

            if (contagem == threads)
                continuar = false;

        }
        
        System.out.println("Tempo final: " + ((System.currentTimeMillis()-tempo)/1000.0));
    }

    public void run() {
        Random rnd = new Random();
        double soma = 0;
        
        System.out.println("Iniciando a Thread: " + threadId());
        for (int i=0;i<numeros;i++){
            soma += Math.pow(rnd.nextDouble(), 10);
        }
    }
}
