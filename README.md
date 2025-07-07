# QtNote

## Sobre o Projeto

QtNote é uma aplicação desktop para gerenciamento de notas, criada para facilitar a organização de tarefas, ideias e informações. Desenvolvido em C++ com Qt, o programa oferece funcionalidades para criar, editar, finalizar e remover notas, separando-as entre ativas e finalizadas para melhor controle.

O projeto foi desenvolvido com foco em simplicidade, usabilidade e eficiência, usando os recursos nativos do Qt para uma interface leve e responsiva.

## Tecnologias Utilizadas

- Linguagem: C++
- Framework: Qt 6
- Sistema de build: CMake
- IDE recomendada: Qt Creator

## Como Compilar e Executar

### Requisitos

- Qt 6 e Qt Creator instalados
- Compilador C++ compatível (MinGW, GCC, Clang)
- CMake instalado

### Passos

1. Clone o repositório:  
   `git clone https://github.com/joaovwp/QtNote.git`

2. Entre na pasta do projeto:  
   `cd QtNote`

3. Crie uma pasta para build e entre nela:  
   `mkdir build && cd build`

4. Gere os arquivos de build com CMake:  
   `cmake ..`

5. Compile o projeto:  
   `cmake --build .`

6. Execute a aplicação gerada.

## Funcionalidades Principais

- Criar notas com título e conteúdo
- Listar notas ativas e finalizadas separadamente
- Editar, salvar e remover notas
- Marcar notas como finalizadas
- Interface intuitiva com abas para navegação rápida

## Autor

João Vitor Wagner Pereira  
Email: joaovitorwagnerp@gmail.com
