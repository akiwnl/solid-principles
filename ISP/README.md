# Interface Segregation Principle (ISP)

<h3>Uma classe não deve ser forçada a implementar interfaces e métodos que não irão utilizar.</h3>

Vamos ver o ISP na prática através de códigos:

![wrongISP](https://github.com/akiwnl/solid-principles/assets/83625654/436de15d-490b-49ae-9d01-8235bf85efb0)

Neste código, podemos ver que há uma classe Carro que possui dois métodos:
- turnOn()
- openSunroof()

O problema existe uma vez que nem todos os carros do mundo possuem teto solar, dessa maneira estamos forçando um carro que não possui essa caracteristica a utilizar o método que ele é incapaz de realizar.

Para corrrigir a violação do ISP, é necessário fazer algumas alteraçoes no código, como:

![correctISP](https://github.com/akiwnl/solid-principles/assets/83625654/2a53c65c-6f7c-4435-ad1e-985a9f6a0dd1)

Aqui a violação do Princípio da Responsabilidade Única (SRP) foi corrigida, pois agora a classe Car se concentra apenas nas funcionalidades relacionadas ao comportamento básico de um carro, como ligar o motor.

Para tratar de funcionalidades específicas, como abrir o teto solar, foi introduzida uma nova classe chamada CarWithSunroof, que herda da classe Car. Essa nova classe é responsável apenas por adicionar a funcionalidade de abrir o teto solar.

