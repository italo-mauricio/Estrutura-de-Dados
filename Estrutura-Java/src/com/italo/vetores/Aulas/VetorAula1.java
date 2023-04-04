package com.italo.vetores.Aulas;
import java.util.Arrays;


public class VetorAula1 {
    private final String[] elementos;
    private int tamanho;

    public VetorAula1(int capacidade){
        this.elementos = new String[capacidade];
        this.tamanho = 0;
    }

    public void addVetorPadrao(String elemento){
        for(int i = 0; i < this.elementos.length; i++){
            if (this.elementos[i] == null){
                this.elementos[i] = elemento;
                break;
            }
        }
    }
   public void addVetorException(String elemento) throws Exception {
        if(this.tamanho < this.elementos.length){
            this.elementos[this.tamanho] = elemento;
            this.tamanho++;
        }else{
            throw new Exception("Vetor já está cheio, não é possível adicionar mais elementos");
        }
    }
    public boolean addVetorBoolean(String elemento){
        if(this.tamanho < this.elementos.length){
            this.elementos[this.tamanho] = elemento;
            this.tamanho++;
            return true;
        }
        return false;
    }
    public int tamanho(){
        return this.tamanho;
    }
    @Override
    public String toString(){
        return Arrays.toString(elementos);
    }


}
