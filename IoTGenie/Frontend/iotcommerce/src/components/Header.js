import React from "react";
import { Link } from "react-router-dom";
import { Navbar, Nav } from "react-bootstrap";

export default function Header() {
  const handleLogout = () => {
    console.log("Logging out..."); // Add logout logic here
  };

  return (
    <>
      <Navbar className="navbar navbar-expand-lg bg-primary" data-bs-theme="dark">
        <div className="container-fluid">
          <Link to="/" className="navbar-brand">
            IoTGenie
          </Link>
          <button
            className="navbar-toggler"
            type="button"
            data-bs-toggle="collapse"
            data-bs-target="#navbarColor01"
            aria-controls="navbarColor01"
            aria-expanded="false"
            aria-label="Toggle navigation"
          >
            <span className="navbar-toggler-icon"></span>
          </button>
          <div className="collapse navbar-collapse" id="navbarColor01">
            <ul className="navbar-nav me-auto">
              <li className="nav-item">
                <Link to="/" className="nav-link active">
                  Home
                </Link>
              </li>
              <li className="nav-item">
                <Link to="/cart" className="nav-link">
                  Cart
                </Link>
              </li>
              <li className="nav-item dropdown">
                <Link
                  to="#"
                  className="nav-link dropdown-toggle"
                  data-bs-toggle="dropdown"
                  role="button"
                  aria-haspopup="true"
                  aria-expanded="false"
                >
                  New User
                </Link>
                <div className="dropdown-menu">
                  <Link to="/login" className="dropdown-item">
                    Login
                  </Link>
                  <Link to="/signup" className="dropdown-item">
                    Signup
                  </Link>
                  <div className="dropdown-divider"></div>
                  <Link to="#" className="dropdown-item" onClick={handleLogout}>
                    Logout
                  </Link>
                </div>
              </li>
            </ul>
            <form className="d-flex"></form>
          </div>
        </div>
      </Navbar>
    </>
  );
}
