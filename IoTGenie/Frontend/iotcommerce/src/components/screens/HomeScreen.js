import React, { useEffect, useState } from "react";
import { Container } from "react-bootstrap";
import axios from "axios";
import { Row, Col } from "react-bootstrap";
import ProductScreen from "./ProductScreen";
import Product from "../Product";

const HomeScreen = () => {
  const [products, setProducts] = useState([]);

  useEffect(() => {
    console.log("Base URL:", process.env.REACT_APP_API_URL);
    async function fetchProducts() {
      try {
        const { data } = await axios.get(
          `${process.env.REACT_APP_API_URL}/api/products/`
        );
        setProducts(data);
      } catch (error) {
        console.error("Error fetching products:", error);
      }
    }
    fetchProducts();
  }, []);

  return (
    <Container>
      <h1>Products</h1>
      <Row>
        {products.map((product) => (
          <Col key={product._id} sm={12} md={6} lg={4} xl={3}>

            <Product product={product} />
          </Col>
        ))}
      </Row>
    </Container>
  );
};

export default HomeScreen;
