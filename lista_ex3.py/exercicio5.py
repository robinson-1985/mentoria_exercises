''' 5. Escrever um algoritmo que leia o nome de um aluno e as notas das três provas que 
ele obteve no semestre. No final informar o nome do aluno e a sua média (aritmética).'''

nome = input('Escreva o nome do aluno: ')
nota1 = float(input('Digite a primeira nota do aluno: '))
nota2 = float(input('Digite a segunda nota do aluno: '))
nota3 = float(input('Digite a terceira nota do aluno: '))

media = (nota1 + nota2 + nota3) / 3

print(f'O nome do aluno é {nome}, e a média de suas notas é {media:.2f}.')