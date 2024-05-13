/* // Exercício 01:
fun main() {
    println("Alo mundo")
}



// Exercício 02:
fun main() {
    print("Digite um número: ")
    val numero = readLine()!!.toInt()
    println("O número informado foi $numero")
}


// Exercício 03:
fun main() {
    print("Digite o primeiro número: ")
    val numero1 = readLine()!!.toInt()
    print("Digite o segundo número: ")
    val numero2 = readLine()!!.toInt()
    val soma = numero1 + numero2
    println("A soma dos números é $soma")
}



// Exercício 04:
fun main() {
    print("Digite a primeira nota: ")
    val nota1 = readLine()!!.toDouble()
    print("Digite a segunda nota: ")
    val nota2 = readLine()!!.toDouble()
    print("Digite a terceira nota: ")
    val nota3 = readLine()!!.toDouble()
    print("Digite a quarta nota: ")
    val nota4 = readLine()!!.toDouble()
    val media = (nota1 + nota2 + nota3 + nota4) / 4
    println("A média das notas é $media")
}

// Exercício 05:
fun main() {
    print("Digite a quantidade de metros: ")
    val metros = readLine()!!.toDouble()
    val centimetros = metros * 100
    println("$metros metros equivalem a $centimetros centímetros")
}

// Exercício 06:
fun main() {
    print("Digite o raio do círculo: ")
    val raio = readLine()!!.toDouble()
    val area = Math.PI * raio * raio
    println("A área do círculo é $area")
}

// Exercício 07:
fun main() {
    print("Digite o lado do quadrado: ")
    val lado = readLine()!!.toDouble()
    val area = lado * lado
    val dobroArea = area * 2
    println("A área do quadrado é $area")
    println("O dobro da área do quadrado é $dobroArea")
}

// Exercício 08:
fun main() {
    print("Digite quanto você ganha por hora: ")
    val valorHora = readLine()!!.toDouble()
    print("Digite o número de horas trabalhadas no mês: ")
    val horas = readLine()!!.toDouble()
    val salario = valorHora * horas
    println("O total do seu salário no mês é R$ $salario")
}
*/

fun main(){
    print("Digite o primeiro número: ")
    val num1 = readLine()!!.toInt()
    print("Digite o segundo número: ")
    val num2 = readLine()!!.toInt()
    if (num1 > num2){
        print("O maior numero é o $num1")
    }
    else if (num1 < num2){
        print("O maior numero é o $num2")
    }
    else if (num1 == num2){
        print("Os numeros sao iguais.")
    }
    else{
        print("Opção inválida!")
    }
}