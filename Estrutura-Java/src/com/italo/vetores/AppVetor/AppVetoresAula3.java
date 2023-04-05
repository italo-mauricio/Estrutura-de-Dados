package com.italo.vetores.AppVetor;

import com.italo.vetores.Aulas.VetorAula1;

public class AppVetoresAula3 {
    public static void main(String[] args) {

        VetorAula1 vetor = new VetorAula1(2);

        try{
            vetor.addVetorException("elemento 1");
            vetor.addVetorException("elemento 2");
            vetor.addVetorException("elemento 3");
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
