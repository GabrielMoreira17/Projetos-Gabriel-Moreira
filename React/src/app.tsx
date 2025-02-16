import { useState } from "react";
import Header from "./components/header";
import InfoPanel from "./components/InfoPanel";
import "./styles/global.css";

function App(){
    return (
        <div className="app-container">
            <header />
                <main>
                    <InfoPanel />
                </main>
            </header>
        </div>
    );
}

export default App;