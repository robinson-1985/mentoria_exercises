/* 5.10 Modiﬁque o programa da listagem para que aceite respostas com letras maiúsculas 
e minúsculas em todas as questões. 

Listagem 5.10 – Contagem de questões corretas

pontos = 0
questão = 1
while questão <= 3:
    resposta = input(f"Resposta da questão {questão}: ")
    if questão == 1 and resposta == "b":
        pontos = pontos + 1
    if questão == 2 and resposta == "a":
        pontos = pontos + 1
    if questão == 3 and resposta == "d":
        pontos = pontos + 1
    questão = questão + 1
print(f"O aluno fez {pontos} ponto(s)") */