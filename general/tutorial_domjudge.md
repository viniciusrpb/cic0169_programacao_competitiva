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

```
.local/bin/p2d --code A --color "#FF0000" -o . polygon_problem.zip
```

Vai ser criado no mesmo local, um arquivo chamado A.zip. Lembre-se de alterar o nome desse arquivo (flag ```--code```) e a cor do balão associado ao problema (flag ```--color```).

Repita esse processo para os demais problemas do contest.

# Parte 4: Ligar o DOMJudge

Ativar o container do banco de dados

```
docker run -d -it --name dj-mariadb -e MYSQL_ROOT_PASSWORD=rootpw -e MYSQL_USER=domjudge -e MYSQL_PASSWORD=djpw -e MYSQL_DATABASE=domjudge -p 13306:3306 mariadb --max-connections=1000
```

Ativar o judgeserver

```
docker run -d --link dj-mariadb:mariadb -it -e MYSQL_HOST=mariadb -e MYSQL_USER=domjudge -e MYSQL_DATABASE=domjudge -e MYSQL_PASSWORD=djpw -e MYSQL_ROOT_PASSWORD=rootpw -p 12345:80 --name domserver domjudge/domserver:latest
```

Pegar a senhas do judge admin:

```
docker exec -it domserver cat /opt/domjudge/domserver/etc/initial_admin_password.secret
```

Pegar a senhas do judge host:

```
docker exec -it domserver cat /opt/domjudge/domserver/etc/restapi.secret
```

Ativar o judgehost, substituindo ```xxxxxxxxxx``` pelo password do judge host.

```
docker run -d -it --privileged -v /sys/fs/cgroup:/sys/fs/cgroup:rw --name judgehost-0 --link domserver:domserver --hostname judgedaemon-0 -e JUDGEDAEMON_PASSWORD=xxxxxxxxxx -e DAEMON_ID=0 domjudge/judgehost:latest
```

Finalmente, redirecione o fluxo de dados da porta 12345 para a porta 3000: 

```
sudo iptables -t nat -A PREROUTING -p tcp --dport 3000 -j REDIRECT --to-port 12345
```

Agora acesse http://164.41.168.24:3000

Na tela de administrador do DOMJudge, procure por "Users"


Criar as equipes!
