import React from "react";
import { Container } from "react-bootstrap";
import Navbar from "./components/Navbar";
import Footer from "./components/Footer";
function App() {
  return (
    <>
      <div>
        <Navbar />
        <Container>
          <h1>Welcome to IoTGenie</h1>
        </Container>
        <Footer />
      </div>
    </>
  );
}

export default App;
