n_alunos = int(input("Informe o número de alunos: "))


resultados = []


for i in range(n_alunos):
 
 
    nota1 = float(input(f"Nota da primeira avaliação do aluno {i+1}:  "))
    nota2 = float(input(f"Nota da segunda avaliação do aluno {i+1}: "))
    nome = input(f"Primeiro nome do aluno {i+1}: ")
    
    
    media = (nota1 + nota2) / 2
    status = "Aprovado" if media >= 7 else "Reprovado"
    
    
    resultados.append(f"Média: {media:.2f} - {nome} - Status: {status}")

print("Resultados dos alunos:")
for resultado in resultados:
    print(resultado)