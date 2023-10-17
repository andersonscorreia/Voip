#!/bin/bash
M=35            # Minha maquina (ajuste para a sua)
CONTEXT=aula    # Contexto dos troncos
rm -f /etc/asterisk/confuser/troncos-sip.inc
for i in 02 06 10 11 12 13 14 15 16 17 18 19 33 34 35 36 37 38 39 41 42 43 44 45 46 47 48 49 51 52 53 55 56 57 60 61 62 63 65 66 95;do
        if [[ $i != $M ]]; then
        echo "
;--------------------------------------------------------
[server$i]                      ;tronco com a central $i
				;$i = identificador do container da central REMOTA
				;$M = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=$CONTEXT                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server$i            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server$M              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.1$M      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.1$i            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=581$i                      ;Porta no peer remoto
disallow=all                    ;Desabilita CODECS obtidos por heranca da configuracao geral
allow=gsm                       ;Codec de primeira prioridade
allow=ulaw                      ;Codec de segunda prioridade
allow=alaw                      ;Codec de terceira prioridade
qualify=yes                     ;Checa se peer esta alcancavel (default a cada 60s)
insecure=port,invite            ;Nao requer autenticacao nas mensagens INVITE deste peer e nao verifica as portas de origem nas conexoes
nat=no                          ;Nao utiliza nat para esses troncos (conexao direta entre centrais)
directmedia=no                  ;Midia nao flui diretamente. Asterisk como intermediario
directrtpsetup=no               ;Nao redireciona midia diretamente no primeiro INVITE
rtptimeout=10                   ;Termina chamada em 10s se nao receber som (datagramas UDP) do outro peer.
" >>/etc/asterisk/confuser/troncos-sip.inc
        fi
done
