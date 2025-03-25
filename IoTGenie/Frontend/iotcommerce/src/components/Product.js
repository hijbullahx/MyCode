import React from "react";
import { Card } from "react-bootstrap"; // Import Card from react-bootstrap
import Rating from "./Rating"; // Import Rating from './Rating'
import { Link } from "react-router-dom"; // Import Link from 'react-router-dom'
function Product({ product }) {
  return (
    <Card className="my-3 p-3 rounded">
      <Link to={`/product/${product._id}`}>
        <Card.Img src={product.image} variant="top" />
      </Link>
      <Card.Body>
        <Link to={`/product/${product._id}`}>
          <Card.Title as="h3">
            <b>{product.productname}</b>
          </Card.Title>
        </Link>
        <Card.Text as="div">
          <div className="my-3">{product.rating} from  {product.numReviews} reviews</div>
        </Card.Text>
        <Card.Text as="h6">{product.price} BDT </Card.Text>
        <Rating
          value={product.rating}
          text={`${product.numReviews} reviews`}
          color={"#f8e825"}
        />
      </Card.Body>
    </Card>
  );
}

export default Product;
