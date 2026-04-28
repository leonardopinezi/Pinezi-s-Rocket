# Pinezi's Rocket 🚀
**Uma implementação prática da Matemática Processual através do Incremento de Pinezi.**

## 1. Sobre o Projeto
O **Pinezi's Rocket** é um simulador de aceleração orbital desenvolvido para demonstrar a aplicação do **Incremento de Pinezi**. Ao contrário do cálculo clássico, que trata o infinito como um limite estático, este projeto utiliza uma abordagem processual onde o infinito é domado através de pulsos discretos de preenchimento.

O objetivo principal é atingir a **Velocidade de Escape da Terra (~11.18 km/s)** garantindo estabilidade numérica e controlo total sobre o erro de truncamento, superando limitações comuns do padrão IEEE 754.



## 2. A Teoria: Matemática Processual
Este simulador baseia-se no artigo *"Incremento de Pinezi e o Infinito em Curso"*. Os conceitos chave incluem:

* **Incremento de Pinezi ($\Delta_n$):** A unidade básica de construção do intervalo, agindo em escalas decimais específicas.
* **Fator de Escala ($\alpha$):** Ajuste dinâmico para atingir qualquer objetivo $L$ através da fórmula $\alpha = 9L$.
* **Progresso Acumulado ($\Pi$):** A soma viva da trajetória, preservando a informação de cada passo dado.

## 3. O Algoritmo
A simulação foi escrita em **C** utilizando precisão estendida (`long double`). O código processa a aceleração em estágios, onde cada estágio refina a velocidade em direção ao alvo sem nunca ultrapassá-lo (*overshoot*).

### Funcionalidades:
* Cálculo de convergência em tempo real.
* Visualização de incrementos decimais por estágio.
* Saída formatada em terminal com cores para monitorização de sistema.

## 4. Como Executar
Para rodar o simulador na sua máquina:

1.  **Clone o repositório:**
    ```bash
    git clone https://github.com/leonardopinezi/Pinezi-s-Rocket/
    ```
2.  **Compile o código:**
    ```bash
    gcc Sim.c -o rocket -lm
    ```
3.  **Execute:**
    ```bash
    ./rocket
    ```

## 5. Resultados
Nos testes realizados, o sistema atingiu a convergência total para a Unidade (1.0) no **Estágio 19**, alcançando a velocidade de escape com precisão de 30 casas decimais.

## 6. Referências
Este projeto fundamenta-se nas obras de:
* **L.E.J. Brouwer** (Intuicionismo)
* **James Stewart** (Cálculo e Séries)
* **David Goldberg** (Aritmética de Ponto Flutuante)
* **Incremento de Pinezi e o Infinito em Curso: Uma matemática Processual** https://archive.org/details/incremento-de-pinezi-e-o-infinito-em-curso (Artigo Oficial)

---
**Autor:** Leonardo G. Pinezi
