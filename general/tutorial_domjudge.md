# Parte 1

Crie os problemas no Polygon, crie os pacotes e baixe um por um.

# Parte 2: Instalação do Polygon2DOMJudge (p2d)

Informações obtidas do site:

https://github.com/cn-xcpc-tools/Polygon2DOMjudge

Primeiramente, crie um ambiente virtual. Se você não tiver um ambiente virtual instalado na sua máquina, faça:

```
sudo apt install virtualenv
```

Depois instale o pipx:

```
sudo apt install pipx
```

Crie agora um ambiente virtual com um nome qualquer. No caso, criei um com o nome conversor:

```
virtualenv conversor
```

```
virtualenv -p /usr/bin/python3 conversor
```

Agora ative o ambiente virtual:

```
source conversor/bin/activate
```

Agora, dentro do ambiente virtual, faça o dowload do p2d e de suas extensões:

```
pipx install git+https://github.com/cn-xcpc-tools/Polygon2DOMjudge
pipx runpip p2d install typing_extensions
```

Pronto.

# Parte 3: Conversão dos pacotes Polygon para DOMJudge

Pegue o pacote .zip do problema no formato do Polygon e digite:

.local/bin/p2d --code A --color "#FF0000" -o . polygon_problem.zip

Vai ser criado no mesmo local, um arquivo chamado A.zip. Lembre-se de alterar o nome desse arquivo (flag ```--code```) e a cor do balão associado ao problema (flag ```--color```).

Repita esse processo para os demais problemas do contest.

# Parte 4:

Na tela de administrador do DOMJudge, procure por "Users"


Criar as equipes!
