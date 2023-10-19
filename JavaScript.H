<title>Calculadora de Lançamento Vertical</title>
</head>
<body>
    <h1>Calculadora de Lançamento Vertical</h1>

    <label for="alturaInicial">Altura Inicial (metros):</label>
    <input type="number" id="alturaInicial" placeholder="Altura inicial"><br>

    <label for="velocidadeInicial">Velocidade Inicial (m/s):</label>
    <input type="number" id="velocidadeInicial" placeholder="Velocidade inicial"><br>

    <label for="tempo">Tempo (segundos):</label>
    <input type="number" id="tempo" placeholder="Tempo"><br>

    <button onclick="calcular()">Calcular</button>

    <p>Altura Máxima: <span id="alturaMaxima"></span> metros</p>
    <p>Tempo de Voo: <span id="tempoDeVoo"></span> segundos</p>
    <p>Altura Atual: <span id="alturaAtual"></span> metros</p>
    
    <script>
        function calcular() {
            const alturaInicial = parseFloat(document.getElementById("alturaInicial").value);
            const velocidadeInicial = parseFloat(document.getElementById("velocidadeInicial").value);
            const tempo = parseFloat(document.getElementById("tempo").value);
            const g = 9.81; // Aceleração devida à gravidade
            
            // Calcular a altura máxima
            const alturaMaxima = (velocidadeInicial * velocidadeInicial) / (2 * g);

            // Calcular o tempo de voo
            const tempoDeVoo = (2 * velocidadeInicial) / g;

            // Calcular a altura atual
            const alturaAtual = alturaInicial + (velocidadeInicial * tempo) - (0.5 * g * tempo * tempo);

            document.getElementById("alturaMaxima").textContent = alturaMaxima.toFixed(2);
            document.getElementById("tempoDeVoo").textContent = tempoDeVoo.toFixed(2);
            document.getElementById("alturaAtual").textContent = alturaAtual.toFixed(2);
        }
    </script>
</body>
</html>
