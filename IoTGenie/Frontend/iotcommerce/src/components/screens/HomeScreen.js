import React, { useEffect, useState } from 'react';
import { Container } from "react-bootstrap";
import axios from 'axios';
import { Row, Col, Card} from 'react-bootstrap';

const HomeScreen = () => {
    const [products, setProducts] = useState([]);

    useEffect(() => {
        console.log("Base URL:", process.env.REACT_APP_API_URL);
        async function fetchProducts() {
            try {
                const  {data}  = await axios.get(`${process.env.REACT_APP_API_URL}/api/products/`);
                setProducts(data);
            } catch (error) {
                console.error('Error fetching products:', error);
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
                        <Card className="my-3 p-3 rounded">
                        <img src={product.image} />
                        </Card>
                        <h3>{product.productname}</h3>
                        <h6>{product.catagory}</h6>
                        <p>{product.price}</p>
                        <p>{product.productinfo}</p>

                    </Col>
                ))}
            </Row>



        </Container>
    );
}

export default HomeScreen;
