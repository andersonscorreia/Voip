
;--------------------------------------------------------
[server02]                      ;tronco com a central 02
				;02 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server02            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.102            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58102                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server06]                      ;tronco com a central 06
				;06 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server06            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.106            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58106                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server10]                      ;tronco com a central 10
				;10 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server10            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.110            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58110                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server11]                      ;tronco com a central 11
				;11 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server11            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.111            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58111                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server12]                      ;tronco com a central 12
				;12 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server12            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.112            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58112                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server13]                      ;tronco com a central 13
				;13 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server13            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.113            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58113                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server14]                      ;tronco com a central 14
				;14 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server14            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.114            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58114                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server15]                      ;tronco com a central 15
				;15 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server15            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.115            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58115                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server16]                      ;tronco com a central 16
				;16 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server16            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.116            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58116                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server17]                      ;tronco com a central 17
				;17 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server17            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.117            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58117                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server18]                      ;tronco com a central 18
				;18 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server18            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.118            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58118                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server19]                      ;tronco com a central 19
				;19 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server19            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.119            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58119                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server33]                      ;tronco com a central 33
				;33 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server33            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.133            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58133                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server34]                      ;tronco com a central 34
				;34 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server34            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.134            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58134                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server36]                      ;tronco com a central 36
				;36 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server36            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.136            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58136                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server37]                      ;tronco com a central 37
				;37 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server37            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.137            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58137                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server38]                      ;tronco com a central 38
				;38 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server38            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.138            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58138                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server39]                      ;tronco com a central 39
				;39 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server39            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.139            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58139                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server41]                      ;tronco com a central 41
				;41 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server41            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.141            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58141                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server42]                      ;tronco com a central 42
				;42 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server42            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.142            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58142                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server43]                      ;tronco com a central 43
				;43 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server43            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.143            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58143                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server44]                      ;tronco com a central 44
				;44 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server44            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.144            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58144                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server45]                      ;tronco com a central 45
				;45 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server45            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.145            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58145                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server46]                      ;tronco com a central 46
				;46 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server46            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.146            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58146                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server47]                      ;tronco com a central 47
				;47 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server47            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.147            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58147                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server48]                      ;tronco com a central 48
				;48 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server48            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.148            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58148                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server49]                      ;tronco com a central 49
				;49 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server49            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.149            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58149                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server51]                      ;tronco com a central 51
				;51 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server51            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.151            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58151                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server52]                      ;tronco com a central 52
				;52 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server52            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.152            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58152                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server53]                      ;tronco com a central 53
				;53 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server53            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.153            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58153                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server55]                      ;tronco com a central 55
				;55 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server55            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.155            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58155                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server56]                      ;tronco com a central 56
				;56 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server56            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.156            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58156                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server57]                      ;tronco com a central 57
				;57 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server57            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.157            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58157                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server60]                      ;tronco com a central 60
				;60 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server60            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.160            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58160                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server61]                      ;tronco com a central 61
				;61 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server61            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.161            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58161                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server62]                      ;tronco com a central 62
				;62 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server62            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.162            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58162                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server63]                      ;tronco com a central 63
				;63 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server63            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.163            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58163                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server65]                      ;tronco com a central 65
				;65 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server65            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.165            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58165                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server66]                      ;tronco com a central 66
				;66 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server66            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.166            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58166                      ;Porta no peer remoto
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


;--------------------------------------------------------
[server95]                      ;tronco com a central 95
				;95 = identificador do container da central REMOTA
				;35 = identificador do container da central LOCAL
type=peer                       ;tipo para troncos: A SIP entity to which Asterisk sends calls
context=aula                ;chamadas provenientes deste tronco veem apenas numeros definidos nesse contexto
defaultuser=server95            ;Nome de usuario para autenticacao (entrante). The new name for the .username. variable.
secret=senhavoip                ;Senha usada para autenticacao local e remota. Se a senha local for diferente da remota, use remotesecret.
;Fromuser=server35              ;Nome de usuario para autenticacao (sainte) no peer remoto. SOBREPOE CallerID(num) no peer remoto
FromDomain=192.168.102.135      ;Dominio nas mensagens SIP (saintes) enviadas ao peer remoto
host=192.168.102.195            ;Usada para determinar o IP do peer remoto nas chamadas saintes, bem como para localizar o peer usado par$
port=58195                      ;Porta no peer remoto
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

