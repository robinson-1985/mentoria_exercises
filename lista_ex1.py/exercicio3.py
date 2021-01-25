''' 3. Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre 
a média ponderada.'''

nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))
nota3 = float(input("Digite a terceira nota: "))
peso1 = float(input("Digite o valor do primeiro peso: "))
peso2 = float(input("Digite o valor do segundo peso: "))
peso3 = float(input("Digite o valor do terceiro peso: "))

somar = peso1 + peso2 + peso3

media_ponderada = (nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) / somar

print("A media ponderada das notas é: ", media_ponderada)