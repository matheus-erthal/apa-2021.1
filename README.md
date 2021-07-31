# Nomes
Arthur de Oliveira Paiva

Matheus Erthal Amâncio da Silva

# Seleção Ingênua

## Código

O código da seleção ingênua se encontra no arquivo [selecaoIngenua.c](/selecaoIngenua.c)

Para executar o código em um sistema Linux basta executar os seguintes comandos dentro da pasta que contém o arquivo:
```
gcc selecaoIngenua.c -o selecaoIngenua
./selecaoIngenua
```
## Experimentos

Dentro do arquivo de código, há comentários com o que se foi usado para realizar os experimentos

### MUDAR A ORDEM DE GRANDEZA DOS NÚMEROS (FIXA K E FIXA N)

Basta copiar e colar um dos vetores no comentário para a váriavel
```
int array[] =
```
dentro da função main()

### FIXA K VARIA N

Basta copiar e colar um dos vetores no comentário para a váriavel
```
int array[] =
```
dentro da função main()

### FIXA N VARIA K

Basta substituir a função
```
int main()
```
do código pela a do comentário.

# Seleção Mediana das Medianas
## Pseudocódigo

Os pseudocódigos se encontram na pasta [pseudocodeMedianofMediansSelect](/pseudocodeMedianofMediansSelect)
- O pseudocódigo da seleção é o arquivo [selecaoMedianaPseudocodigo.pseudo](/pseudocodeMedianofMediansSelect/selecaoMedianaPseudocodigo.pseudo)
- O pseudocódigo da partição é o arquivo [particaoPseudocodigo.pseudo](/pseudocodeMedianofMediansSelect/particaoPseudocodigo.pseudo)

## Gráficos

Os gráficos com os resultados dos experimentos se encontram na pasta [chartsMedianOfMediansSelect](/chartsMedianOfMediansSelect)
- No primeiro gráfico o "K"(k-ésimo menor elemento que se deseja encontrar) foi fixado e o "N"(tamanho do vetor) foi variado entre 100 e 1000 crescendo de 100 em 100 a cada experimento(100, 200, 300...).
O arquivo pode ser encontrado aqui: [fixaKvariaN.png](/chartsMedianOfMediansSelect/fixaKvariaN.png)
- No segundo gráfico o "N"(tamanho do vetor) foi fixado e o "K"(k-ésimo menor elemento que se deseja encontrar) foi variado entre 10 e 100 cresncendo de 10 em 10 a cada experimento(10, 20, 30...).
O arquivo pode ser encontrado aqui: [fixaNvariaK.png](/chartsMedianOfMediansSelect/fixaNvariaK.png)
- No terceiro gráfico tanto "K"(k-ésimo menor elemento que se deseja encontrar) e o "N"(tamanho do vetor) foram fixados, variando a grandeza dos números que compõe o vetor de 1\~400 até 1000000\~10000000 a cada experimento.
O arquivo pode ser encontrado aqui: [variaOrdemGrandezaNumerosVetor.png](/chartsMedianOfMediansSelect/variaOrdemGrandezaNumerosVetor.png)
- No terceiro gráfico tanto "K"(k-ésimo menor elemento que se deseja encontrar) e o "N"(tamanho do vetor) foram fixados, variando o tamanho do grupo que o vetor foi separado de 7 até 25 aumentando de 2 em 2 a cada experimento(7, 5, 9...).
O arquivo pode ser encontrado aqui: [variaTamanhoGrupo.png](/chartsMedianOfMediansSelect/variaTamanhoGrupo.png)

## Arquivo de dados

Os arquivo de dados usados para gerar os gráficos no gnuplot se encontram na pasta [dataFilesMedianOfMediansSelect](/dataFilesMedianOfMediansSelect)
- Os dados do gráfico fixaKvariaN.png se encontram no arquivo [fixaKvariaN.dat](/dataFilesMedianOfMediansSelect/fixaKvariaN.dat)
- Os dados do gráfico fixaNvariaK.png se encontram no arquivo [fixaNvariaK.dat](/dataFilesMedianOfMediansSelect/fixaNvariaK.dat)
- Os dados do gráfico ordemDeGrandeza.png se encontram no arquivo [ordemDeGrandeza.dat](/dataFilesMedianOfMediansSelect/ordemDeGrandeza.dat)
- Os dados do gráfico variaTamanhoGrupo.png se encontram no arquivo [variaTamanhoGrupo.dat](/dataFilesMedianOfMediansSelect/variaTamanhoGrupo.dat)

## Código

O código da seleção mediana das medianas se encontra no arquivo [selecaoMediana.c](/selecaoMediana.c)

Para executar o código em um sistema Linux basta executar os seguintes comandos dentro da pasta que contém o arquivo:
```
gcc selecaoMediana.c -o selecaoMediana
./selecaoMediana
```

## Experimentos

Dentro do arquivo de código, há comentários com o que se foi usado para realizar os experimentos

### VARIAR TAMANHO DOS GRUPOS (FIXA K E N)

Basta trocar a variavel abaixo pelo número desejado

```
int tamanhoDoGrupo = 5;
```

### MUDAR A ORDEM DE GRANDEZA DOS NÚMEROS (FIXA K E FIXA N)

Basta copiar e colar um dos vetores no comentário para a váriavel
```
int array[] =
```
dentro da função main()

### FIXA K VARIA N

Basta copiar e colar um dos vetores no comentário para a váriavel
```
int array[] =
```
dentro da função main()

### FIXA N VARIA K

Basta substituir a função
```
int main()
```
do código pela a do comentário.
