# Liskov Substitution Principle (LSP)

<h3>As subclasses devem poder ser substituídas por suas classes base sem afetar a corretude do programa.</h3>

Vamos entender melhor:

![wrongLSP](https://github.com/akiwnl/solid-principles/assets/83625654/8aae9ce0-261a-495f-b7a6-7a9464367603)

Ao chamar o método fly() na classe Penguin, estamos violando esse princípio, porque os pinguins não podem voar.
Isso faz com que tenham resultados inesperados quando tentarmos usar a classe Penguin onde a capacidade de voar for utilizada.

Agora aplicando o princípio de Substituicao de Liskov, temos:

![correctLSP](https://github.com/akiwnl/solid-principles/assets/83625654/fddce979-e414-4613-b28f-975b8e63367a)

Nesse código, a violação do Princípio de Liskov foi corrigida pois separamos a funcionalidade de voar em uma classe chamada FlyingBirds, que herda da classe Bird. Assim a classe Penguin, que não pode voar, não herda essa funcionalidade.

Agora com a correção do código as subclasses podem ser usadas de forma segura no lugar da suas classes base.
