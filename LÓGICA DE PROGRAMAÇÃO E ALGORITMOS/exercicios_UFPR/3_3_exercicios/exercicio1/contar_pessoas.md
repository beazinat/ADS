## Exercício: Contar Pessoas na Sala

No primeiro dia letivo do primeiro semestre de 2009, um dos autores deste material colocou o seguinte problema aos novos alunos:  
Queríamos saber quantos estudantes estavam presentes na sala de aula naquele momento. A sala tinha capacidade aproximada de 100 lugares e naquele momento estava razoavelmente cheia.

---

### Solução 1  
**Algoritmo para contar um a um**

```
início
    Comece com o número de alunos presentes na sala igual a zero
    Para cada aluno presente, some o número 1 ao total
    Não conte o mesmo aluno duas vezes
fim
```

### Solução 2
**Algoritmo para subtrair as cadeiras vazias**

```
início
    Comece com o número de cadeiras vazias presentes na sala igual a zero
    Para cada cadeira vazia presente na sala, some o número 1 ao total
    Subtraia o valor de cadeiras vazias do total de cadeiras na sala
fim
```

### Solução 3
**Algoritmo para subtrair as cadeiras vazias**

```
início
    Meça, em metros quadrados, a área total da sala
    Estime o número médio de pessoas por metro quadrado da sala
    Multiplique a área total da sala pelo número estimado de pessoas por metro quadrado na sala
fim
```

### Solução 4
**Algoritmo para utilizar catracas**

```
início
    Compre catracas
    Atribua a um funcionário a função de garantir que todos os alunos passem pela catraca para entrar na sala
    Instale catracas na porta da sala
    Aguarde todos os alunos entrarem na sala
    Colha o número de vezes que a catraca foi girada
fim
```

### Solução 5
**Algoritmo para multiplicar por fileiras**

```
início
    Comece com o número total alunos da primeira fileira igual a zero
    Comece com o número total de fileiras igual a zero
    Para cada aluno da fileira, some 1 ao total de alunos da primeira fileira
    Para cada fileira, some 1 ao total de fileiras
    Multiplique o total de alunos da primeira fileira pelo total de fileiras
fim
```

### Solução 6
**Algoritmo para contar por fileiras**

```
início
    Contar o número de fileiras
    Para cada aluno da primeira cadeira da fileira, instrua a contar cada aluno de sua própria fileira
    Lembre-os de contar a si mesmos também
    Lembre-os de não contar o mesmo aluno duas vezes
    Some o número que cada aluno que contou obteve
fim
```

### Solução 7
**Algoritmo dos da divisão em pares**

```
início
    Atribuir o número 1 para cada aluno
    Enquanto o número de alunos em pé for maior do que 1:
    Organizar os alunos em pares
    Dizer aos alunos que somem seus números
    Instruir um dos alunos de cada um dos pares a se sentar
    Para cada aluno que ficar em pé, colher o resultado da soma obtida
    Somar os resultados das somas obtidas
fim
```

