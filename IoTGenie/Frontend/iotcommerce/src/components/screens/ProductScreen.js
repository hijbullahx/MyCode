import React, { useEffect, useState } from 'react';
import { Link } from 'react-router-dom'
import { Row, Col, Image, ListGroup, Card, Button } from 'react-bootstrap'
import Rating from '../Rating'
import axios from 'axios'
// Removed unused ProductDetails import
// Removed duplicate ProductScreen function
function ProductScreen() {
  const [products, setProducts] = useState([]);
  const [selectedProduct, setSelectedProduct] = useState(null);

  useEffect(() => {
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

  const handleProductClick = async (productId) => {
    try {
      const { data } = await axios.get(
        `${process.env.REACT_APP_API_URL}/api/products/${productId}`
      );
      setSelectedProduct(data);
    } catch (error) {
      console.error("Error fetching product details:", error);
    }
  };

  if (selectedProduct) {
    return <ProductInfo product={selectedProduct} />;
  }

  return (
    <>
      <Row>
        {products.map((product) => (
          <Col key={product._id} sm={12} md={6} lg={4} xl={3}>
            <Card className="my-3 p-3 rounded">
              <Link to="#" onClick={() => handleProductClick(product._id)}>
                <Image src={product.image} alt={product.name} fluid />
              </Link>
              <Card.Body>
                <Link to="#" onClick={() => handleProductClick(product._id)}>
                  <Card.Title as="div">
                    <strong>{product.name}</strong>
                  </Card.Title>
                </Link>
                <Card.Text as="div">
                  <div className="my-3">
                    <Rating
                      value={product.rating}
                      text={`${product.numReviews} reviews`}
                    />
                  </div>
                </Card.Text>
                <Card.Text as="h3">${product.price}</Card.Text>
              </Card.Body>
            </Card>
          </Col>
        ))}
      </Row>
      <div className="go-back-container" style={{ textAlign: 'center', margin: '20px 0' }}>
        <Button
          className="btn btn-light"
          style={{
            padding: '10px 20px',
            borderRadius: '10px',
            backgroundColor: '#f8f9fa',
            border: '1px solid #ddd',
            boxShadow: '0 4px 6px rgba(0, 0, 0, 0.1)',
            fontWeight: 'bold',
          }}
          onClick={() => window.history.back()}
        >
          Go Back
        </Button>
      </div>
    </>
  );
}
function ProductInfo({ product }) {
  return (
    <div className="product-info-container">
      <Button
        className="btn btn-light my-3"
        onClick={() => window.location.reload()}
      >
        Go Back
      </Button>
      <Row>
        <Col md={6}>
          <Image src={product.image} alt={product.productname} fluid />
        </Col>
        <Col md={3}>
          <ListGroup variant="flush">
            <ListGroup.Item>
              <h3>{product.productname}</h3>
            </ListGroup.Item>
            <ListGroup.Item>
              <Rating
                value={product.rating}
                text={`${product.numReviews} reviews`}
              />
            </ListGroup.Item>
            <ListGroup.Item>Price: ${product.price}</ListGroup.Item>
            <ListGroup.Item>
              Description: {product.productinfo}
            </ListGroup.Item>
            <ListGroup.Item>
              Brand: {product.productbrand}
            </ListGroup.Item>
            <ListGroup.Item>
              Category: {product.productcategory}
            </ListGroup.Item>
          </ListGroup>
        </Col>
        <Col md={3}>
          <Card>
            <ListGroup variant="flush">
              <ListGroup.Item>
                <Row>
                  <Col>Price:</Col>
                  <Col>
                    <strong>${product.price}</strong>
                  </Col>
                </Row>
              </ListGroup.Item>
              <ListGroup.Item>
                <Row>
                  <Col>Status:</Col>
                  <Col>
                    {product.countInStock > 0 ? "In Stock" : "Out of Stock"}
                  </Col>
                </Row>
              </ListGroup.Item>
              {product.countInStock > 0 && (
                <ListGroup.Item>
                  <Button className="btn-block" type="button">
                    Add to Cart
                  </Button>
                </ListGroup.Item>
              )}
            </ListGroup>
          </Card>
        </Col>
      </Row>
    </div>
  );
}

export default ProductScreen
