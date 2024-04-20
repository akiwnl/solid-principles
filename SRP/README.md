# Single Responsibility Principle

<h3><b>Uma classe deve ter um, e somente um, motivo para mudar.</b></h3>

Esse princípio declara que uma classe deve ser especializada em um único assunto e possuir apenas uma responsabilidade dentro do software, ou seja, a classe deve ter uma única tarefa ou ação para executar.

<hr>

Este código é uma implementação básica de uma classe Customer em C++. Ele possui um método createCustomer que aceita um nome e um ID como argumentos e atribui esses valores aos membros privados name e id da classe.
&nbsp;

![wrongSRP](https://github.com/akiwnl/solid-principles/assets/83625654/dbba272b-1ef7-47a4-8116-95e6f3f0de2a)

Este código viola o Princípio da Responsabilidade Única (SRP) porque a classe Customer está assumindo mais de uma responsabilidade. Sendo elas atribuir os valores dos parâmetros na instância criada e fazer o print do Customer.
