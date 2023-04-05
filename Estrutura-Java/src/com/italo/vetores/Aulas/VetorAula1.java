package com.italo.vetores.Aulas;
import java.util.Arrays;


public class VetorAula1 {
    private final String[] elementos;   // definindo um vetor de Strings
    private int tamanho;                // definindo um tamanho de inteiros

    public VetorAula1(int capacidade){
        this.elementos = new String[capacidade];     // construtor definindo a capacidade do vetor
        this.tamanho = 0;
    }

    public void addVetorPadrao(String elemento){
        for(int i = 0; i < this.elementos.length; i++){
            if (this.elementos[i] == null){     // se a posição for nula, quer dizer que está disponível, pode adicionar
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

    public String search(int position){
        return this.elementos[position];
    }


    @Override
    public String toString(){

        StringBuilder s = new StringBuilder();  // utilizando o super builder eu deixo o meu us ode String mais optmizado
        s.append("[");
        for (int i = 0; i < this.tamanho-1; i++){
            s.append(this.elementos[i]);
            s.append(", ");
        }
        if (this.tamanho > 0){
          s.append(this.elementos[this.tamanho-1]);
        }
        s.append("]");

        return s.toString();
    }


}
