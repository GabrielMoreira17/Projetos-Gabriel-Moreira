import React from "react";
import ReactDom from "react-dom/client";
import App from "./app";
import "./styles/global.css";

ReactDom.createRoot(document.getElementById("root")!).render(
    <React.StricMode>
        <App />
    </React.StricMode>
)