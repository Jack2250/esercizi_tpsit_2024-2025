import java.util.ArrayList;

public class Concessionaria {
    private ArrayList<Veicolo> officina = new ArrayList<>();

    public void addVeicolo(Veicolo v) {
        officina.add(v);
    }

    public int numeroVeicoli() {
        return officina.size();
    }

    public void modificaPrezzo(String modello, double prezzo) throws Exception {
        boolean trovato = false;
        for (Veicolo v : officina) {
            if (v.getModello().equalsIgnoreCase(modello)) {
                v.setPrezzo(prezzo);
                trovato = true;
            }
        }
        if (!trovato) {
            throw new Exception();
        }
    }

    public void stampaPerPrezzo(double prezzo) throws Exception {
        boolean trovato = false;
        for (Veicolo v : officina) {
            if (prezzo > v.getPrezzo()) {
                System.out.println(v);
                trovato = true;
            }
        }
        if (!trovato) {
            throw new Exception();
        }
    }
}