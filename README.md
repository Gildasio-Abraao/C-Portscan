
# portscan.c

``portscan.c`` é um Portscan criado em C. Ele retorna quais as portas abertas de 0 até 65535.

Primeiro vamos compilar o programa:
```bash
  gcc portscan.c -o portscan
```

Depois vamos executar:
```bash
  ./portscan 192.168.0.1
```

Exemplo de retorno:
```bash
Porta 80 Aberta 
Porta 21 Aberta 
Porta 443 Aberta 
```