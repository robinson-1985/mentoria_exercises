''' 7.Faça um programa que receba o salário base de um funcionário, calcule e mostre seu 
salário a receber, sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto 
de 10% sobre o salário base. '''

salario = float(input('Digite o salário do funcionário: R$ '))

gratificacao = 50
imposto = salario * 0.1

salario_a_receber = salario + gratificacao - imposto

print('O salário a receber do funcionário é: R$ ', salario_a_receber)