// Defina a aceleração devido à gravidade (em m/s²)
const g = 9.81;

function calcular() {
    const v = Number(document.querySelector("#velocidadeinicial").value); // Velocidade
    const θ = Number(document.querySelector("#angulo").value); // Ângulo
    const t = Number(document.querySelector("#tempo").value); // Tempo
    const x0 = Number(document.querySelector("#posicaoinicialhorizontal").value); // Posição X
    const y0 = Number(document.querySelector("#posicaoinicialvertical").value); // Posição Y

    const y = y0 + v * Math.sin(θ * (Math.PI / 180)) * t + (g * t ** 2 / 2); // Função Horária y
    const x = x0 + v * Math.cos(θ * (Math.PI / 180)) * t;  // Função Horária X

    document.querySelector("#resultadovertical").textContent = "Resultado Vertical: " + y.toFixed(2);
    document.querySelector("#resultadohorizontal").textContent = "Resultado Horizontal: " + x.toFixed(2);
}

document.addEventListener("DOMContentLoaded", () => {
    const calcularButton = document.querySelector("#calcular");
    calcularButton.addEventListener("click", calcular);
});
