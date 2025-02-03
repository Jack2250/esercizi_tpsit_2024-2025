import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        Concessionaria c = new Concessionaria();
        Veicolo v1 = new Veicolo("Ford", "Fiesta", 3000);
        Veicolo v2 = new Veicolo("Lambo", "TTTTTTTTTTTTTT", 3000);
        c.addVeicolo(v1);
        c.addVeicolo(v2);

        try {
            System.out.println("Inserisci il modello dell'auto da cambiare");
            String modello = sc.nextLine();
            System.out.println("Inserisci il nuovo prezzo");
            double prezzo = sc.nextDouble();

            c.modificaPrezzo(modello, prezzo);

            System.out.println(v1);
            System.out.println(v2);

            System.out.println("Inserisci il prezzo");
            double prezzo2 = sc.nextDouble();

            c.stampaPerPrezzo(prezzo2);

        } catch (Exception e) {
            System.out.println(e);
        }

        System.out.println(v1);
        System.out.println(v2);
    }
}