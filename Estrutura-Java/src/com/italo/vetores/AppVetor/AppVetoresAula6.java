package com.italo.vetores.AppVetor;

import com.italo.vetores.Aulas.VetorAula1;

public class AppVetoresAula6 {
    public static void main(String[] args) {
        VetorAula1 vetor = new VetorAula1(10);

        vetor.addVetorBoolean("elemento 1");
        vetor.addVetorBoolean("elemento 2");
        vetor.addVetorBoolean("elemento 3");

        System.out.println(vetor.buscaExiste("elemento 2"));
        System.out.println(vetor.buscaExiste("elemento 12"));
    }
}
