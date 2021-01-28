''' 6. Faça um programa que receba o salário base de um funcionário, calcule e mostre o 
salário a receber, sabendo-se que o funcionário tem gratificação de 5% sobre o salário 
base e paga imposto de 7% também sobre o salário base. '''

salario_base = float(input("Digite o salario base do funcionário: R$ "))

gratificacao = salario_base * 0.05
imposto = salario_base * 0.07
salario_a_receber = (salario_base + gratificacao) - imposto

print("O salario a receber é: R$ ", salario_a_receber)