package com.italo.vetores.AppVetor;

import com.italo.vetores.Aulas.VetorAula1;

public class AppVetoresAula4 {
    public static void main(String[] args) {
        VetorAula1 vetor = new VetorAula1(10);

        vetor.addVetorBoolean("Elemento 1");
        vetor.addVetorBoolean("Elemento 2");
        vetor.addVetorBoolean("Elemento 3");

        System.out.println(vetor.tamanho());




    }
}
