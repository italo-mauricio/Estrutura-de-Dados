package com.italo.vetores.AppVetor;

import com.italo.vetores.Aulas.VetorAula1;

public class AppVetoresAula4 {
    public static void main(String[] args) {
        VetorAula1 vetor = new VetorAula1(10);

        vetor.addVetorPadrao("Elemento 1");
        vetor.addVetorPadrao("Elemento 2");
        vetor.addVetorPadrao("Elemento 3");

        System.out.println(vetor.tamanho());




    }
}
