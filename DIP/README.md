# Dependency Inversion Principle (DIP)

<h3>Dependa de abstrações e não de implementações.</h3>

Esse princípio recomenda que uma classe deve estabelecer dependências prioritariamente com abstrações e não com implementações concretas, pois abstrações (interfaces) são mais estáveis do que implementações concretas (classes). 

O seguinte código sugere uma classe Light que pode ser ligada ou desligada, e uma classe Switch que controla essa luz. Assim, Switch depende diretamente da implementação de Light.

![wrongDIP](https://github.com/akiwnl/solid-principles/assets/83625654/876ffec6-2d66-4714-a7c8-fcab1998494d)

Neste exemplo de código, Switch tem uma dependência direta de Light. Dessa maneira, isso viola o princípio de inversão de dependência, pois Switch está diretamente acoplado a uma implementação específica de Light.

Aplicando o princípio de inversão de dependência temos:

![correctDIP](https://github.com/akiwnl/solid-principles/assets/83625654/158c7bdf-0a05-4140-b481-9bdf5b90d378)

Agora Switch depende de uma abstração (Light) e não de uma implementação específica (Bulb). Isso significa que é possivel mudar a implementação de Light sem modificar o Switch de uma maneira mais fácil.




