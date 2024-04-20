# Single Responsibility Principle

<h3><b>Uma classe deve ter um, e somente um, motivo para mudar.</b></h3>

Esse princípio declara que uma classe deve ser especializada em um único assunto e possuir apenas uma responsabilidade dentro do software, ou seja, a classe deve ter uma única tarefa ou ação para executar.

<hr>

Este código é uma implementação básica de uma classe Customer em C++. Ele possui um método createCustomer que aceita um nome e um ID como argumentos e atribui esses valores aos membros privados name e id da classe.
&nbsp;

![wrongSRP](https://github.com/akiwnl/solid-principles/assets/83625654/dbba272b-1ef7-47a4-8116-95e6f3f0de2a)

Este código viola o Princípio da Responsabilidade Única (SRP) porque a classe Customer está assumindo mais de uma responsabilidade. Sendo elas atribuir os valores dos parâmetros na instância criada e fazer o print do Customer.

<hr>


Neste código, a classe Customer é responsável apenas por representar um cliente, enquanto a classe Console é responsável apenas por lidar com a impressão de dados no console. Isso demonstra a aplicação correta do Princípio da Responsabilidade Única (SRP).

![correctSRP](https://github.com/akiwnl/solid-principles/assets/83625654/e30b7ec6-bb84-43b4-9d56-48bea9bb0890)

Neste código:

* A classe Customer é responsável por armazenar os dados de um cliente (name e id) e fornece métodos para acessá-los (getName() e getId()).
* A classe Console é responsável apenas pela impressão de dados no console e fornece o método printCustomer() para imprimir os detalhes de um cliente fornecido.

Essa é a versão corrigida porque cada classe tem uma única responsabilidade. A classe Customer agora é responsável apenas pelos dados do cliente, enquanto a classe Console é responsável apenas pela impressão dos dados no console.