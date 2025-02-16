import { useEffect, useState } from "react";

const InfoPanel = () => {
    const [dolar, setDolar] = useState<number | null>(null);

    useEffect(() => {
        fetch("https://economia.awesomeapi.com.br/json/last/USD-BRL")
        .then((response) => response.json)
        .then((data) => setDolar(parseFloat(data.USDBRL.bid)))
        .catch((error) => console.error("Erro ao buscar o dólar:", error));
    }, []);

    return (
        <section className="info-panel">
            <h2>Informações do Cotidiano</h2>
            <p>💰 Preço do dólar: {dolar ? `R$ ${dolar.toFixed(2)}` : "Carregando..."}</p>
        </section>
    );
};

export default InfoPanel;